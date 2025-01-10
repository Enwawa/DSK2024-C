.model small
.stack 100h

.data
    barang1 db '1. Buku', 0Ah, 0Dh, '$'
    barang2 db '2. Pensil', 0Ah, 0Dh, '$'
    barang3 db '3. Buku Gambar', 0Ah, 0Dh, '$'
    barang4 db '4. Pensil Warna', 0Ah, 0Dh, '$'
    harga1 db 'Buku - 3000Rp', 0Ah, 0Dh, '$'
    harga2 db 'Pensil - 2000Rp', 0Ah, 0Dh, '$'
    harga3 db 'Buku Gambar - 5000Rp', 0Ah, 0Dh, '$'
    harga4 db 'Pensil Warna - 12000Rp', 0Ah, 0Dh, '$'
    prompt db 'Pilih menu (1-4): $'
    hasil db 0Ah, 0Dh, 'Anda memilih barang: $'
    newline db 0Ah, 0Dh, '$'

.code
main proc
    mov ax, @data
    mov ds, ax

    ; Menampilkan menu
    mov ah, 09h
    lea dx, barang1
    int 21h
    lea dx, barang2
    int 21h
    lea dx, barang3
    int 21h
    lea dx, barang4
    int 21h

    ; Menampilkan prompt/input pilihan
    lea dx, prompt
    mov ah, 09h
    int 21h

    ; Menerima input satu karakter
    mov ah, 01h
    int 21h
    sub al, '0'         ; Mengubah input ASCII ke angka
    mov bl, al          ; Menyimpan angka di BL

    ; Baris baru setelah input
    lea dx, newline
    mov ah, 09h
    int 21h

    ; Menampilkan hasil awal
    lea dx, hasil
    mov ah, 09h
    int 21h

    ; Menampilkan barang dan harga berdasarkan pilihan
    cmp bl, 1
    je tampil_buku
    cmp bl, 2
    je tampil_pensil
    cmp bl, 3
    je tampil_buku_gambar
    cmp bl, 4
    je tampil_pensil_warna
    jmp end_program

tampil_buku:
    lea dx, harga1
    mov ah, 09h
    int 21h
    jmp end_program

tampil_pensil:
    lea dx, harga2
    mov ah, 09h
    int 21h
    jmp end_program

tampil_buku_gambar:
    lea dx, harga3
    mov ah, 09h
    int 21h
    jmp end_program

tampil_pensil_warna:
    lea dx, harga4
    mov ah, 09h
    int 21h
    jmp end_program

end_program:
    lea dx, newline
    mov ah, 09h
    int 21h

    ; Keluar dari program
    mov ah, 4Ch
    int 21h

end main
