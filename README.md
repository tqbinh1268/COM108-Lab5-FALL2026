# YÊU CẦU LAB 5 - COM108 (CẬP NHẬT 2026)

* **Môn học:** Nhập môn Lập trình với C (PRF192 / COM108)
* **Thời lượng:** Thực hiện trong buổi học
* **Hình thức nộp bài:** Sử dụng GitHub Template, đẩy mã nguồn (`git push`) và tự động kiểm thử qua GitHub Actions trên repository cá nhân.

---

## PHẦN 1: NỘI DUNG CHI TIẾT CÁC BÀI TẬP

### I. Quy tắc làm bài bắt buộc

1. **Khởi tạo bài làm:**
* Sinh viên tạo repository cá nhân từ Template mẫu của giảng viên và clone về máy.
* Khung chương trình chuẩn, định nghĩa kiểu dữ liệu và khuôn mẫu hàm (Function Prototype / Interface) đã được chuẩn bị sẵn trong thư mục `src/` (`bai1.c`, `bai2.c`, `bai3.c`).
* **Quy tắc bất biến:** Tuyệt đối không thay đổi tên hàm, kiểu dữ liệu trả về và thứ tự tham số trong các file mẫu.

2. **Quy định lập trình:**
* Được phép sử dụng các công cụ AI (Cursor, Copilot, ChatGPT, Claude...) để hỗ trợ phân tích và viết code.
* **Cấm biến toàn cục (`global variables`):** Toàn bộ dữ liệu trao đổi giữa các hàm phải thông qua tham số hoặc giá trị trả về (`return`).

3. **Hạn ngạch đẩy bài (Luật 10-Push):**
* Toàn bộ bài Lab 5 được cấp tối đa **10 lần push**:
* **Bài 1:** Tối đa 3 lần push.
* **Bài 2:** Tối đa 3 lần push.
* **Bài 3:** Tối đa 4 lần push.
* Hệ thống sẽ tự động khóa kiểm tra nếu vượt quá hạn ngạch trên.
* Mỗi lần đẩy bài (`push`) bắt buộc phải ghi nhận vào tệp `LOGBOOK.md`.

---

### II. Đặc tả chi tiết các bài tập

#### Bài 1: Module Kiểm Định Năng Lượng Trạm Sạc (`src/bai1.c`)

Một trạm sạc xe điện thông minh yêu cầu module xử lý dữ liệu sạc:

* **Hàm kiểm định sản lượng (đơn vị: Wh):**
* Sử dụng vòng lặp `do...while`: chỉ chấp nhận giá trị sản lượng $Wh > 0$. Nếu người dùng nhập sai ($\le 0$), thông báo lỗi và yêu cầu nhập lại.
* Trả về giá trị Wh hợp lệ thông qua lệnh `return`.

* **Hàm quy đổi điện năng:** Nhận vào số Wh, tính toán và trả về số Kilowatt-giờ (kWh) tương ứng ($1\text{ kWh} = 1000\text{ Wh}$).
* **Hàm tính cước phí:** Nhận vào số kWh đã nạp và đơn giá mỗi kWh, tính toán và trả về tổng tiền điện phải thanh toán.
* **Tại hàm `main()`:** Mở tệp `src/bai1.c`, kết nối luồng gọi 3 hàm trên và in ra màn hình: Wh đã sạc, kWh (lấy 2 chữ số thập phân), Tổng cước phí.

#### Bài 2: Hệ Thống Giao Dịch & Hoàn Tiền Ví Điện Tử (`src/bai2.c`)

Xây dựng hàm xử lý thanh toán đơn hàng có cơ chế hoàn tiền (Cashback):

* **Nghiệp vụ giao dịch:**
* Hàm tiếp nhận dữ liệu: số dư ví hiện có, số tiền hóa đơn cần thanh toán, tỷ lệ hoàn tiền (% cashback).
* *Quy tắc xử lý:*
* Nếu số dư ví không đủ thanh toán ($soDu < tongTien$): Giao dịch thất bại, giữ nguyên toàn bộ số dư ban đầu, tiền hoàn nhận về bằng 0, hàm trả về mã trạng thái thất bại (`0`).
* Nếu số dư ví đủ điều kiện: Trừ số tiền hóa đơn khỏi ví, tính số tiền hoàn theo tỷ lệ cashback, sau đó cộng trực tiếp tiền hoàn lại vào số dư ví của khách hàng, hàm trả về mã trạng thái thành công (`1`).

* **Ràng buộc kỹ thuật cốt lõi:**
* Biến số dư ví và biến tiền hoàn khai báo tại `main()` **bắt buộc phải tự động cập nhật giá trị mới nhất ngay sau khi kết thúc hàm giao dịch**.
* (Xem cấu trúc tham số con trỏ chi tiết trong tệp mẫu `src/bai2.c` sau khi clone repo).

#### Bài 3: Phân Phối Tiền Mặt ATM Tối Ưu Mệnh Giá (`src/bai3.c`)

Module điều phối tiền mặt tự động tại cây ATM khi khách hàng rút tiền:

* **Nghiệp vụ phân phối:**
* Tại hàm `main()`, nhập số tiền cần rút. Kiểm tra: Số tiền phải lớn hơn 0 và bắt buộc phải là bội số của 50.000 VNĐ. Nếu không hợp lệ, thông báo từ chối giao dịch.
* Viết hàm phân phối tiền với 4 loại mệnh giá: 500.000, 200.000, 100.000 và 50.000 VNĐ sao cho **tổng số lượng tờ tiền nhả ra là ít nhất**.
* Hàm có nhiệm vụ tính toán số tờ của từng mệnh giá và ghi trực tiếp kết quả vào 4 biến đếm số lượng tờ tương ứng đã khai báo tại `main()`.
* Hàm trả về giá trị là **tổng số lượng tờ tiền** mà máy ATM sẽ nhả ra.

* **Ràng buộc kiến trúc:**
* **Tuyệt đối không sử dụng lệnh in (`printf`) bên trong hàm tính toán phân phối tiền.** Hàm chỉ thực hiện tính toán và gán giá trị. Mọi thao tác xuất số tờ tiền của từng loại phải nằm ở `main()`.
* *(Xem cấu trúc tham số chi tiết trong tệp mẫu `src/bai3.c` sau khi clone repo).*

---

## PHẦN 2: HƯỚNG DẪN BẮT ĐẦU VÀ NỘP BÀI (QUY TRÌNH MỚI)

Thực hiện tuần tự: **Hoàn thiện Bài 1 $\rightarrow$ Push & Nhận trạng thái $\rightarrow$ Ghi log $\rightarrow$ Xanh mới chuyển sang Bài 2.**

---

### 1. Tải kho bài tập về máy (Clone)

1. Truy cập vào **đường link Repository bài tập** do giảng viên cung cấp (Ví dụ: `https://github.com/tqbinh1268/COM108-Lab5-FALL2026`).

2. Nhìn lên góc trên bên phải trang, bấm nút màu xanh lá cây **"Use this template"** $\rightarrow$ chọn **"Create a new repository"**.

3. Thiết lập repo cá nhân:
* **Repository name:** Đặt tên theo cú pháp `COM108-Lab5-<MaSinhVien>` (VD: `COM108-Lab5-PS12345`).
* **Visibility:** Bắt buộc để **Public** (để hệ thống chạy kiểm thử tự động).
* Bấm **Create repository**.

4. Mở repo cá nhân vừa tạo, bấm nút **Code** màu xanh $\rightarrow$ Copy đường link HTTPS.
5. Mở **VS Code**, bật Terminal (`Ctrl + ~`) và chạy lệnh:
```bash
git clone <link_https_vua_copy>
cd COM108-Lab5-<MaSinhVien>
```

---

### 2. Quy trình làm từng bài & Đẩy lên GitHub (Push)

#### 🔹 Thực hiện Bài 1 (`src/bai1.c` - Tối đa 3 lần push)

* **Bước 1:** Viết code hoàn thiện các hàm trong `src/bai1.c`.
* **Bước 2 (Ghi log trước khi push):** Mở tệp `LOGBOOK.md` trong VS Code, điền:
```markdown
### Lần 1: Bài 1
- Trạng thái: Chờ chấm
- Lỗi/Cách sửa: Viết vòng lặp do...while kiểm tra Wh và hàm đổi kWh
```
* **Bước 3 (Đẩy bài 1):** Chạy lần lượt trong Terminal:
```bash
git add src/bai1.c LOGBOOK.md
git commit -m "Nop bai 1 lan 1"
git push origin main
```

#### 🔹 Đọc trạng thái phản hồi từ GitHub

Ngay sau khi push, mở trang web GitHub repo cá nhân của bạn, nhìn vào commit vừa đẩy:

* **Vòng tròn xoay vàng (`🟡`):** Hệ thống đang chấm. Đợi 15 – 30 giây và load lại trang (F5).
* **Dấu tích xanh (`✅`):** Bài 1 đã chính xác hoàn toàn! Mở `LOGBOOK.md` cập nhật lại trạng thái thành "Xanh" và bắt đầu chuyển sang làm Bài 2.
* **Dấu chéo đỏ (`❌`):** Bài 1 có lỗi!
1. Bấm trực tiếp vào dấu **❌ $\rightarrow$ Chọn Details** để đọc thông báo lỗi từ máy chấm.
2. Mở `LOGBOOK.md` sửa lại dòng trạng thái và ghi cách sửa:
```markdown
### Lần 1: Bài 1
- Trạng thái: Đỏ (Lỗi chia nguyên wh / 1000 ra 0.00)
- Lỗi/Cách sửa: Đổi thành chia 1000.0 để ra số thực float
```
3. Sửa code trong `src/bai1.c`, sau đó thực hiện push lần 2:
```bash
git add src/bai1.c LOGBOOK.md
git commit -m "Fix bai 1 lan 2"
git push origin main
```

---

#### 🔹 Tiếp tục với Bài 2 (`src/bai2.c` - Tối đa 3 lần push)

* Mở `src/bai2.c` viết hàm giao dịch ví điện tử.
* Cập nhật `LOGBOOK.md` và đẩy code Bài 2:
```bash
git add src/bai2.c LOGBOOK.md
git commit -m "Nop bai 2 lan 1"
git push origin main
```
* **Nếu nhận ❌ Đỏ (Lỗi tham chiếu ô nhớ):**
* Bấm **Details** xem log (Ví dụ: `FAIL: So du vi tai main khong he thay doi sau khi goi ham!`).
* Mở `LOGBOOK.md` ghi nhanh thông tin:
```markdown
### Lần ...: Bài 2
- Trạng thái: Đỏ (Ví không trừ tiền ở ngoài hàm main)
- Lỗi/Cách sửa: Đổi tham số thành con trỏ float *soDuVi và thêm & ở hàm main
```
* Nhờ AI giải thích nguyên nhân và cách dùng con trỏ/tham chiếu. Sửa code và push lại.
* **Khi nhận ✅ Xanh:** Cập nhật `LOGBOOK.md` $\rightarrow$ Chuyển sang Bài 3.

---

#### 🔹 Hoàn thiện Bài 3 (`src/bai3.c` - Tối đa 4 lần push)

* Mở `src/bai3.c` viết hàm điều phối tiền ATM.
* **Lưu ý:** Không đặt lệnh `printf` bên trong hàm tính toán `phanPhoiATM`.
* Cập nhật `LOGBOOK.md` và đẩy code Bài 3:
```bash
git add src/bai3.c LOGBOOK.md
git commit -m "Nop bai 3 lan 1"
git push origin main
```
* Bấm **Details** đọc log nếu bị `❌ Đỏ`, cập nhật `LOGBOOK.md` và sửa bài.
* Khi nhận `✅ Xanh`, đẩy commit chốt bài:
```bash
git add LOGBOOK.md
git commit -m "Hoan thanh Lab 5"
git push origin main
```

---

### 3. Bảng tra cứu hành động theo trạng thái GitHub

| Biểu tượng trên GitHub | Trạng thái | Hành động tiếp theo |
| --- | --- | --- |
| `🟡` | Đang chấm | Đợi 15 – 30 giây rồi F5 lại trang web. |
| `✅` | Đạt (Pass) | Mở `LOGBOOK.md` sửa thành "Xanh". Dừng sửa bài hiện tại, chuyển sang bài tiếp theo. |
| `❌` | Lỗi (Failed) | 1. Bấm vào `❌` $\rightarrow$ Chọn **Details** đọc lỗi.<br><br>2. Cập nhật dòng lỗi và cách sửa vào `LOGBOOK.md`.<br><br>3. Sửa code trên máy rồi mới push lại. |
| `QUOTA EXCEEDED` | Khóa nộp bài | Đã push quá số lần quy định. Dừng lại và giơ tay báo giảng viên tại lớp. |
