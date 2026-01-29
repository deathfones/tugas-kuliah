# Nama    : Hanan Muntaz Ramadhan
# NIM     : A18.2025.0177
# Tema    : Kinematika 

import pygame
import math

NAMA_MAHASISWA = "Hanan Muntaz Ramadhan"    
NIM_MAHASISWA  = "A18.2025.00177"       
JUDUL_TUGAS    = "UAS Fisika"

# Ukuran Window Total
LEBAR_WINDOW = 1100
TINGGI_WINDOW = 600
FPS = 60

# PENGATURAN KOLOM 
LEBAR_SIDEBAR = 350  # Lebar kolom kiri (untuk teks)
WARNA_SIDEBAR = (240, 240, 245) # Warna abu muda
WARNA_CANVAS  = (0, 191, 255) # Warna putih untuk animasi

# Fisika
PIXEL_PER_METER = 5 
GRAVITASI = 9.8


pygame.init()
layar = pygame.display.set_mode((LEBAR_WINDOW, TINGGI_WINDOW))
pygame.display.set_caption(f"{JUDUL_TUGAS} - {NAMA_MAHASISWA}")
jam = pygame.time.Clock()

# Font
font_judul = pygame.font.SysFont("Arial", 22, bold=True)
font_label = pygame.font.SysFont("Arial", 16, bold=True)
font_data  = pygame.font.SysFont("Consolas", 18) # Font monospace biar angka rapi

# Warna
HITAM = (0, 0, 0)
MERAH = (220, 20, 60)
BIRU  = (0, 100, 255)
ABU   = (150, 150, 150)


# VARIABEL 

sudut = 45.0
kecepatan_awal = 60.0


start_x = LEBAR_SIDEBAR + 50 
start_y = TINGGI_WINDOW - 50

bola_x = start_x
bola_y = start_y
t = 0 
sedang_simulasi = False
jejak_lintasan = []

hasil_jarak, hasil_tinggi, hasil_waktu = 0, 0, 0


# FUNGSI LOGIKA

def reset_simulasi():
    global bola_x, bola_y, t, sedang_simulasi, jejak_lintasan
    bola_x = start_x
    bola_y = start_y
    t = 0
    sedang_simulasi = False
    jejak_lintasan = []

def hitung_teoritis(v0, angle_deg):
    rad = math.radians(angle_deg)
    g = GRAVITASI
    h_max = (v0**2 * math.sin(rad)**2) / (2 * g)
    range_max = (v0**2 * math.sin(2 * rad)) / g
    t_total = (2 * v0 * math.sin(rad)) / g
    return h_max, range_max, t_total


# MAIN LOOP

running = True
while running:
    
    layar.fill(WARNA_CANVAS)
    
    pygame.draw.line(layar, HITAM, (LEBAR_SIDEBAR, start_y), (LEBAR_WINDOW, start_y), 3)
    
    
    # INPUT & LOGIKA
    
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                if sedang_simulasi: reset_simulasi()
                else:
                    sedang_simulasi = True
                    hasil_tinggi, hasil_jarak, hasil_waktu = hitung_teoritis(kecepatan_awal, sudut)

    keys = pygame.key.get_pressed()
    if not sedang_simulasi:
        if keys[pygame.K_UP]: kecepatan_awal += 0.5
        if keys[pygame.K_DOWN]: kecepatan_awal -= 0.5
        if keys[pygame.K_LEFT]: sudut += 0.5
        if keys[pygame.K_RIGHT]: sudut -= 0.5
        
        # Batasan Input
        if sudut > 89: sudut = 89
        if sudut < 1: sudut = 1
        if kecepatan_awal < 1: kecepatan_awal = 1

    # Perhitungan Fisika
    if sedang_simulasi:
        t += 1/FPS
        rad = math.radians(sudut)
        posisi_fisika_x = kecepatan_awal * math.cos(rad) * t
        posisi_fisika_y = (kecepatan_awal * math.sin(rad) * t) - (0.5 * GRAVITASI * (t**2))
        
        # Mapping ke Layar 
        bola_x = start_x + (posisi_fisika_x * PIXEL_PER_METER)
        bola_y = start_y - (posisi_fisika_y * PIXEL_PER_METER)
        
        if t % 0.1 < 0.05:
            jejak_lintasan.append((bola_x, bola_y))
            
        if bola_y >= start_y:
            bola_y = start_y
            sedang_simulasi = False
            t = hasil_waktu 

    
    # GAMBAR ANIMASI

    # Jejak & Bola
    for titik in jejak_lintasan:
        pygame.draw.circle(layar, BIRU, (int(titik[0]), int(titik[1])), 2)
    pygame.draw.circle(layar, MERAH, (int(bola_x), int(bola_y)), 10)

    # GAMBAR SIDEBAR
    
    sidebar_rect = pygame.Rect(0, 0, LEBAR_SIDEBAR, TINGGI_WINDOW)
    pygame.draw.rect(layar, WARNA_SIDEBAR, sidebar_rect)
    pygame.draw.line(layar, ABU, (LEBAR_SIDEBAR, 0), (LEBAR_SIDEBAR, TINGGI_WINDOW), 3) # Garis pemisah

    # --- KONTEN SIDEBAR ---
    margin_x = 20
    cursor_y = 30 # Posisi Y awal untuk teks

    # 1. Identitas
    layar.blit(font_judul.render("UNIVERSITAS DIAN NUSWANTORO", True, BIRU), (margin_x, cursor_y))
    cursor_y += 35
    layar.blit(font_data.render(f"Nama : {NAMA_MAHASISWA}", True, HITAM), (margin_x, cursor_y))
    cursor_y += 25
    layar.blit(font_data.render(f"NIM  : {NIM_MAHASISWA}", True, HITAM), (margin_x, cursor_y))
    
    cursor_y += 40
    pygame.draw.line(layar, ABU, (margin_x, cursor_y), (LEBAR_SIDEBAR - margin_x, cursor_y), 2)
    cursor_y += 20

    # 2. Input Parameter
    layar.blit(font_judul.render("INPUT PARAMETER", True, BIRU), (margin_x, cursor_y))
    cursor_y += 10
    layar.blit(font_label.render("(Gunakan Panah Keyboard)", True, ABU), (margin_x+10, cursor_y + 20))
    cursor_y += 50

    # Kotak Input Kecepatan
    pygame.draw.rect(layar, (255, 255, 255), (margin_x, cursor_y, 200, 40), border_radius=5)
    layar.blit(font_label.render("Kecepatan (Vo):", True, HITAM), (margin_x, cursor_y - 20))
    layar.blit(font_data.render(f"{kecepatan_awal:.1f} m/s", True, HITAM), (margin_x + 10, cursor_y + 10))
    cursor_y += 70

    # Kotak Input Sudut
    pygame.draw.rect(layar, (255, 255, 255), (margin_x, cursor_y, 200, 40), border_radius=5)
    layar.blit(font_label.render("Sudut Elevasi (θ):", True, HITAM), (margin_x, cursor_y - 20))
    layar.blit(font_data.render(f"{sudut:.1f} derajat", True, HITAM), (margin_x + 10, cursor_y + 10))
    
    cursor_y += 60
    pygame.draw.line(layar, ABU, (margin_x, cursor_y), (LEBAR_SIDEBAR - margin_x, cursor_y), 2)
    cursor_y += 20

    # 3. Output Real-time
    layar.blit(font_judul.render("DATA SIMULASI", True, MERAH), (margin_x, cursor_y))
    cursor_y += 40
    
    layar.blit(font_data.render(f"Waktu : {t:.2f} s", True, HITAM), (margin_x, cursor_y))
    cursor_y += 25
    # Hitung posisi real dalam meter
    jarak_real = (bola_x - start_x) / PIXEL_PER_METER
    tinggi_real = (start_y - bola_y) / PIXEL_PER_METER
    layar.blit(font_data.render(f"Jarak X : {jarak_real:.2f} m", True, HITAM), (margin_x, cursor_y))
    cursor_y += 25
    layar.blit(font_data.render(f"Tinggi Y: {tinggi_real:.2f} m", True, HITAM), (margin_x, cursor_y))

    cursor_y += 40
    
    # 4. Status / Instruksi
    if not sedang_simulasi:
        pygame.draw.rect(layar, (200, 255, 200), (margin_x, cursor_y, 280, 50), border_radius=5)
        pusat_tombol = margin_x + 140
        teks_spasi = font_judul.render("TEKAN SPASI", True, (0, 100, 0))
        rect_teks = teks_spasi.get_rect(center=(pusat_tombol, cursor_y + 25))
        layar.blit(teks_spasi, rect_teks)
        
        # Tampilkan hasil akhir jika sudah ada data
        if hasil_jarak > 0:
             cursor_y += 70
             layar.blit(font_label.render("Hasil Akhir:", True, HITAM), (margin_x, cursor_y))
             layar.blit(font_data.render(f"Max Range: {hasil_jarak:.2f} m", True, HITAM), (margin_x, cursor_y + 20))
             layar.blit(font_data.render(f"Max Height: {hasil_tinggi:.2f} m", True, HITAM), (margin_x, cursor_y + 40))
    else:
        pygame.draw.rect(layar, (255, 200, 200), (margin_x, cursor_y, 280, 50), border_radius=5)
        pusat_tombol = margin_x + 140
        teks_reset = font_judul.render("RESET (SPASI)", True, (150, 0, 0))
        rect_teks = teks_reset.get_rect(center=(pusat_tombol, cursor_y + 25))
        layar.blit(teks_reset, rect_teks)

    pygame.display.flip()
    jam.tick(FPS)

pygame.quit()