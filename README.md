Fox Ciel bắt đầu học lập trình. Nhiệm vụ đầu tiên là vẽ một con cáo! Tuy nhiên, điều đó hóa ra lại quá khó đối với người mới bắt đầu, vì vậy cô quyết định vẽ một con rắn thay thế.

Một con rắn là một mẫu trên bảng n x m . Ký hiệu ô thứ c của hàng thứ r là ( r ,  c ) . Đuôi của con rắn nằm ở (1, 1) , sau đó thân của nó kéo dài đến (1,  m ) , sau đó đi xuống 2 hàng đến (3,  m ) , sau đó đi sang trái đến (3, 1) và cứ như vậy.

Nhiệm vụ của bạn là vẽ con rắn này cho Fox Ciel: các ô trống phải được biểu diễn bằng các ký tự chấm (' . ') và các ô hình con rắn phải được điền bằng các dấu số (' # ').

Hãy xem xét các bài kiểm tra mẫu để hiểu được mô hình con rắn.

Đầu vào:

Dòng duy nhất chứa hai số nguyên: n và m ( 3 ≤  n ,  m  ≤ 50 ).

n là một số lẻ .

Đầu ra:

Đầu ra n dòng. Mỗi dòng phải chứa một chuỗi gồm m ký tự. Không đầu ra khoảng trắng.

Giải quyết:

Bài toán yêu cầu vẽ một con rắn trên một bảng có kích thước n x m, trong đó n là số hàng và m là số cột. Con rắn sẽ được thể hiện bằng ký tự #, trong khi các ô trống sẽ được biểu diễn bằng dấu chấm (.).

Cấu trúc của con rắn như sau:

Hàng đầu tiên và tất cả các hàng lẻ (1, 3, 5, ...) đều sẽ được điền toàn bộ bằng ký tự #.

Hàng thứ hai trong nhóm hai hàng, tức là hàng thứ 2, hàng thứ 6, hàng thứ 10, v.v., sẽ có ký tự # ở cuối hàng và các ký tự còn lại là '.'

Hàng thứ tư trong nhóm hai hàng, tức là hàng thứ 4, hàng thứ 8, hàng thứ 12, v.v., sẽ có ký tự # ở đầu hàng và các ký tự còn lại là '.'
