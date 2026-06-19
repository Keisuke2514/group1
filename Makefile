#変数の設定
CC = gcc		#コンパイラ
CFLAGS = -Wall		#警告オプション
TARGET = bin/Memorization-app.exe		#出力ファイル名
OBJS = obj/main.o obj/logic.o obj/storage.o obj/ui.o

#ビルドルール
$(TARGET):$(OBJS)
		@if not exist bin mkdir bin
		$(CC) -o $@ $^

#コンパイラルール
obj/%.o:%.c logic.h storage.h
	@if not exist obj mkdir obj
	$(CC) $(CFLAGS) -c -o $@ $<

#削除ルール
clean:
	-rmdir /s /q bin obj