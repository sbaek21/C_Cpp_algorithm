#include <stdio.h>
#include <string.h>

int main() {

	char arr[6];
	scanf("%s", arr); // 배열 이름 == 배열 주소이기 때문에 & 안써도 됨
	
	int size = strlen(arr); // 문자열 길이 반환
	int result = 0;

	for (int i = 0; i < size / 2; i++) { // 반만 비교
		if (arr[i] == arr[size - 1 - i];) {
			result = result + 1;
		}
	}

	if (result == size / 2) {//result 가 뭐지?
		printf("회문입니다.");
	} else {
		printf("회문이 아닙니다.");
	}

	return 0;
}