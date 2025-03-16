## 📌 프로젝트 개요
**ft_irc** 프로젝트는 C++로 간단한 **IRC(Internet Relay Chat) 서버**를 구현하는 과제입니다. 이를 통해 네트워크 프로그래밍, 소켓 통신, 프로토콜 설계 및 이벤트 기반 프로그래밍을 학습하는 것을 목표로 합니다.

## 🛠️ 기술 스택
- **C++98** (최신 기능 사용 불가)
- **POSIX 소켓 API** (`sys/socket.h`, `bind` 등)
- **STL 컨테이너** (`map`, `vector`, `deque` 등)
- **I/O 멀티플렉싱** (`kqueue` 및 `kevent` 사용)

## 🎯 요구사항
1. **IRC 프로토콜 구현**
   - `PASS`, `NICK`, `USER`, `JOIN`, `PART`, `PRIVMSG`, `NOTICE`, `KICK`, `TOPIC`, `INVITE` 등 기본 명령어 처리
   - 클라이언트가 `PASS`, `NICK`, `USER`를 올바르게 입력해야만 서버에 연결 가능

2. **다중 클라이언트 처리**
   - `kqueue` 및 `kevent`를 사용하여 여러 클라이언트와 동시에 통신
   - 클라이언트의 연결 및 해제 (`QUIT` 명령어 처리)

3. **채널 기능 구현**
   - 클라이언트는 `JOIN` 명령어를 통해 채널에 참여 가능
   - `PART` 명령어를 통해 채널을 나갈 수 있음
   - `KICK` 명령어를 통해 강제 퇴장 가능
   - `MODE` 명령어를 통해 채널 설정 변경 가능

4. **메시지 브로드캐스팅 및 개인 메시지**
   - `PRIVMSG` 명령어로 특정 사용자 또는 채널에 메시지 전송 가능

5. **서버 관리 기능**
   - 서버와 클라이언트 간 **PING/PONG** 구현 (연결 유지 및 클라이언트 응답 확인)


## 🚀 실행 방법
### 1. 프로젝트 클론
```bash
git clone https://github.com/TobenKun/42Seoul-IRC.git
cd Seoul-IRC
```

### 2. 컴파일
```bash
make
```

### 3. 서버 실행
```bash
./ircserv <port> <password>
```
예시:
```bash
./ircserv 6667 secretpass
```

### 4. 클라이언트 접속 (irssi 활용)
```bash
irssi
/connect -nocap 127.0.0.1 6667 -password secretpass
```

### 5. 기본 명령어 예제
```bash
PASS secretpass
NICK mynickname
USER myusername 0 * :My Real Name
JOIN #mychannel
PRIVMSG #mychannel :Hello, IRC!
```

## 🧹 정리 및 종료
```bash
make clean   # 오브젝트 파일 삭제
make fclean  # 실행 파일 및 오브젝트 파일 삭제
```

## 🔍 주요 기능
- **멀티 클라이언트 지원:** `kqueue` 및 `kevent`을 활용한 동시 처리
- **IRC 프로토콜 준수:** 기본적인 채팅 기능 및 채널 관리 기능 포함
- **소켓 프로그래밍 학습:** TCP 소켓 및 서버-클라이언트 구조 이해
- **비동기 이벤트 처리:** 논블로킹 방식의 네트워크 통신 구현
- **irssi 클라이언트 호환:** `irssi`를 사용하여 서버에 연결하고 테스트 가능


