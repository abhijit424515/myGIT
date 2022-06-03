#flashcards
Backlink : [[LEARNING E-HACKING]]

---

TCP :: Transmission Control Protocol
<!--SR:!2021-11-27,4,270-->
UDP :: User Datagram Protocol
<!--SR:!2021-11-26,3,250-->

| TCP                      | UDP                      |
| ------------------------ | ------------------------ |
| Higher reliability       | Lower reliability        |
| Connection-oriented      |                          |
|                          | ex. VoIP, streaming, DNS |
| Works on 3-Way HANDSHAKE |                          |
|                          |                          |

**3-Way HANDSHAKE** =>

| SYN                                | SYN ACK                                                  | ACK                                    |
| ---------------------------------- | -------------------------------------------------------- | -------------------------------------- |
| Request                            | Response                                                 | Acknowledgement                        |
| Can I connect to you at port 443 ? | If port 443 is open and available, you can connect to me | I want to establish the connection now | 

We can actually see these 3 packets being sent and received using **Wireshark**
