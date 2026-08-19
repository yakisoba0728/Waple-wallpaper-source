// Function: FUN_1404d6a58
// Addr: 1404d6a58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *in_RAX;
  char cVar2;
  ulonglong unaff_RBX;
  int *unaff_RBP;
  char unaff_R12B;
  byte in_CF;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(byte *)(unaff_RBX - 0x6a4affca) = *(byte *)(unaff_RBX - 0x6a4affca) << 1 | in_CF;
  in_RAX[0x69] = in_RAX[0x69] + (char)((ulonglong)in_RAX >> 8);
  *param_4 = *param_4 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)((longlong)unaff_RBP + 0x60003695) = *(char *)((longlong)unaff_RBP + 0x60003695) + cVar2;
  pcVar1 = (char *)((unaff_RBX & 0xffffffff) + 6);
  *pcVar1 = *pcVar1 + (char)((uint)(*unaff_RBP * 0x20021) >> 8);
  *(char *)((longlong)unaff_RBP + 0x60003695) = *(char *)((longlong)unaff_RBP + 0x60003695) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

