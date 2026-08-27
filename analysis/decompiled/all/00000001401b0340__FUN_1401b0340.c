// Function: FUN_1401b0340
// Addr: 1401b0340
// Size: 27 bytes


ulonglong FUN_1401b0340(uint param_1)

{
  ulonglong in_RAX;
  
  if ((param_1 < 0x21) &&
     (in_RAX = 0x100002200, (0x100002200U >> ((ulonglong)param_1 & 0x3f) & 1) != 0)) {
    return 0x100002201;
  }
  return in_RAX & 0xffffffffffffff00;
}

