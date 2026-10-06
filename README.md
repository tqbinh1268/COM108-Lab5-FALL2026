# COM108 - NHẬP MÔN LẬP TRÌNH C (LAB 5)
**Học kỳ:** Fall 2026  
**Chủ đề:** Xây dựng Module Hàm & Quản trị Bộ nhớ con trỏ

---

## 🚀 HƯỚNG DẪN BẮT ĐẦU BÀI LÀM (QUY TRÌNH TEMPLATE)

1. Nhìn lên góc trên bên phải của trang này, bấm vào nút màu xanh lá cây: **`Use this template`** -> chọn **`Create a new repository`**.
2. **Thiết lập kho lưu trữ cá nhân:**
   * **Repository name:** Đặt tên theo cú pháp: `COM108-Lab5-<MaSinhVien>` (Ví dụ: `COM108-Lab5-PS12345`).
   * **Visibility:** Bắt buộc chọn **Public** (để GitHub Actions chạy chấm điểm tự động miễn phí).
   * Bấm **Create repository**.
3. **Tải code về máy cá nhân:**
   * Mở repository cá nhân vừa tạo, bấm nút **`Code`** màu xanh -> Copy link HTTPS.
   * Mở Terminal / VS Code và gõ:
     ```bash
     git clone <link_https_vua_copy>
     cd COM108-Lab5-<MaSinhVien>
     ```
4. **Cấu trúc thư mục bài làm:**
   * `src/bai1.c`: Triển khai Bài 1 (Kiểm định năng lượng & Đổi đơn vị)
   * `src/bai2.c`: Triển khai Bài 2 (Ví điện tử - Tham chiếu con trỏ)
   * `src/bai3.c`: Triển khai Bài 3 (Điều phối tiền ATM tối ưu)
   * `LOGBOOK.md`: Ghi nhật ký bắt buộc trước mỗi lần commit/push.

---

## 📌 QUY TRÌNH PUSH CODE & CHẤM ĐIỂM TỰ ĐỘNG

* **Thực hiện tuần tự:** Làm xong và pass bài nào thì mới chuyển sang bài kế tiếp.
* **Ghi nhận Micro-Log:** Mở `LOGBOOK.md` cập nhật ít nhất 2 câu ngắn mô tả trạng thái/lỗi sửa trước mỗi lần push.
* **Lệnh nộp bài:**
  ```bash
  git add src/bai1.c LOGBOOK.md
  git commit -m "Nop bai 1 lan 1 va cap nhat log"
  git push origin main
  ```

* **Đọc kết quả chấm:**
* `🟡 Vòng xoay vàng`: Đang chấm tự động (15 - 30 giây).
* `✅ Dấu tích xanh`: Vượt qua toàn bộ bài test. Chuyển sang bài tiếp theo.
* `❌ Dấu chéo đỏ`: Bị lỗi! Bấm trực tiếp vào dấu `❌` -> chọn **Details** để đọc dòng lỗi và nhờ AI giải thích nguyên nhân.



⚠️ **LƯU Ý HẠN NGẠCH (QUOTA 10-PUSH):** Toàn bộ bài Lab có tối đa 10 lần push (Bài 1: 3 lần, Bài 2: 3 lần, Bài 3: 4 lần). Vượt quá số lần trên, hệ thống sẽ tự động khóa bài thi.
