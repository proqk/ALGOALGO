#include <stdio.h>
int main() {
  char input[1000000];
  int alphas[26] = { 0 }; //각 알파벳의 갯수를 저장하는 배열
  int max=-1; //최댓값 초기화
  char answer;
  scanf("%s", &input);
  for (int i=0;input[i]!=0;i++){
    if (input[i] <= 90)
      alphas[input[i]-65]++;
    else
      alphas[input[i]-97]++; //알파벳 갯수를 계산하여 해당 알파벳에 해당하는 인덱스의 값을 1 씩 더함
  }
  for (int i = 0; i < 26; i++) {
    if (alphas[i] > max) {
      answer = 65 + i;
    max = alphas[i]; //max 값보다 알파벳 갯수가 많을 시 max 값 및 answer 수정
  }
  else if (alphas[i] == max)
  answer = '?'; //중복 시 '?'
}
  printf("%c", answer); //최종 answer 출력
  return 0;
}
