/*
 * @Created by : SongXiaoxu
 * @Copyright ? 2020�� by: ������. All rights reserved
 * @Date: 2020-11-10 12:11:57
 * @LastEditTime: 2020-11-10 12:21:07
 */
class App {
    public static void main(String args[]) {
        for (int i = 100; i < 201; i++) {
            boolean b = false;

            for (int j = 2; j < i - 1; j++) {
                int k = i % j;
                if (k == 0) {
                    b = true;
                }
            }
            // �������true�ʹ�ӡ������

            if (!b) {
                System.out.println(i);
            }
        }
    }
}
