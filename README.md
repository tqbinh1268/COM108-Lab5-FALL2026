# HƯỚNG DẪN THỰC HÀNH LAB 5: XÂY DỰNG MODULE VÀ QUẢN TRỊ BỘ NHỚ HÀM

- **Môn học**: Nhập môn Lập trình với C (COM108)
- **Môi trường thực hành**: VS Code / Terminal, Git, GitHub Classroom
- **Hình thức nộp bài**: Đẩy mã nguồn trực tiếp lên repository cá nhân trên GitHub

---

## PHẦN 1: YÊU CẦU BÀI TẬP LAB 5

### I. Quy tắc làm bài bắt buộc

1. **Khởi tạo bài làm qua GitHub Classroom:**
   - Sinh viên nhận liên kết từ giảng viên và clone repository cá nhân về máy.
   - Khung chương trình chuẩn, định nghĩa kiểu dữ liệu và khuôn mẫu hàm (Function Prototype / Interface) đã được chuẩn bị sẵn trong thư mục `src/` (`bai1.c`, `bai2.c`, `bai3.c`).
   - **Quy tắc bất biến:** Tuyệt đối không thay đổi tên hàm, kiểu dữ liệu trả về và thứ tự tham số trong các file mẫu.

2. **Quy định lập trình:**
   - Được phép sử dụng các công cụ AI (Cursor, Copilot, ChatGPT, Claude...) để hỗ trợ phân tích và viết code.
   - **Cấm biến toàn cục (global variables):** Toàn bộ dữ liệu trao đổi giữa các hàm phải thông qua tham số hoặc giá trị trả về (return).

3. **Hạn ngạch đẩy bài (Luật 10-Push):**
   - Tổng cộng có tối đa **10 lần push** cho toàn bộ Lab 5:
     - **Bài 1:** Tối đa 3 lần push.
     - **Bài 2:** Tối đa 3 lần push.
     - **Bài 3:** Tối đa 4 lần push.
   - Hệ thống sẽ tự động khóa kiểm tra nếu vượt quá hạn ngạch trên.
   - Mỗi lần đẩy bài (push) bắt buộc phải ghi nhận vào tệp `LOGBOOK.md`.

### II. Nội dung chi tiết các bài tập

**Bài 1: Module Kiểm Định Năng Lượng Trạm Sạc (src/bai1.c)**
Một trạm sạc xe điện thông minh yêu cầu module xử lý dữ liệu sạc:
- **Hàm kiểm định sản lượng (đơn vị: Wh):**
  - Sử dụng vòng lặp `do...while`: chỉ chấp nhận giá trị sản lượng Wh > 0. Nếu người dùng nhập sai (<= 0), thông báo lỗi và yêu cầu nhập lại.
  - Trả về giá trị Wh hợp lệ thông qua lệnh return.

**Bài 2: Ví Điện Tử (src/bai2.c)**
- Viết code thanh toán và cập nhật số dư, tiền hoàn (sử dụng con trỏ Call by Reference).
- Trả về trạng thái thành công hoặc thất bại nếu không đủ tiền.

**Bài 3: Phân Phối Rút Tiền ATM (src/bai3.c)**
- Viết code phân phối số lượng từng loại mệnh giá (500k, 200k, 100k, 50k).
- **Yêu cầu:** Tuyệt đối không dùng lệnh `printf` bên trong hàm tính toán.

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
- **Bước 2 (Ghi log trước khi push)**: Mở tệp `LOGBOOK.md` trong VS Code, điền theo mẫu:
  ```markdown
  ### Lần 1: Bài 1
  - Trạng thái: Chờ chấm
  - Đã làm: Viết vòng lặp do...while kiểm tra Wh...
  ```
- **Bước 3 (Đẩy bài 1)**: Chạy lần lượt trong Terminal:
  ```bash
  git add src/bai1.c LOGBOOK.md
  git commit -m "Nop bai 1 lan 1"
  git push origin main
  ```
