// Function: FUN_1404a13d0
// Addr: 1404a13d0
// Size: 1 bytes


void FUN_1404a13d0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  longlong in_RAX;
  char in_CF;
  
  pbVar1 = (byte *)(in_RAX + CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                      CONCAT11(((char)((ulonglong)param_2 >> 8) -
                                               *(char *)(param_1 + param_2)) - in_CF,(char)param_2))
                   );
  *pbVar1 = *pbVar1 | (byte)((ulonglong)in_RAX >> 8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

