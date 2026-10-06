# HƯỚNG DẪN THỰC HÀNH LAB 5: XÂY DỰNG MODULE VÀ QUẢN TRỊ BỘ NHỚ HÀM

**Môn học**: Nhập môn Lập trình với C (COM108)

---

## PHẦN 2: HƯỚNG DẪN CLONE, PUSH TỪNG BÀI, ĐỌC TRẠNG THÁI VÀ GHI LOG

Thực hiện tuần tự: **Hoàn thiện Bài 1 $\rightarrow$ Push & Nhận trạng thái $\rightarrow$ Ghi log $\rightarrow$ Xanh mới chuyển sang Bài 2.**

### 1. Tải kho bài tập về máy (Clone)

1. Bấm vào đường link GitHub Classroom của lớp $\rightarrow$ Bấm nút xanh "**Accept this assignment**".
2. Khi repo tạo xong, copy đường link HTTPS (dạng `https://github.com/.../lab5-mssv.git`).
3. Mở **VS Code**, bật Terminal (Ctrl + ~) và chạy lệnh:
   ```bash
   git clone <link_repo_vua_copy>
   cd <ten_thu_muc_repo>
   ```

### 2. Quy trình làm từng bài & Đẩy lên GitHub (Push)

🔹 **Thực hiện Bài 1 (src/bai1.c - Tối đa 3 lần push)**

- **Bước 1**: Viết code hoàn thiện các hàm trong `src/bai1.c`.
- **Bước 2 (Ghi log trước khi push)**: Mở tệp `LOGBOOK.md` trong VS Code, điền:
  ```markdown
  ### Lần 1: Bài 1
  - Trạng thái: Chờ chấm
  - Đã làm: Viết vòng lặp do...while kiểm tra Wh và hàm đổi kWh
  ```
- **Bước 3 (Đẩy bài 1)**: Chạy lần lượt trong Terminal:
  ```bash
  git add src/bai1.c LOGBOOK.md
  git commit -m "Nop bai 1 lan 1"
  git push origin main
  ```
