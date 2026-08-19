// Function: FUN_1404ab35c
// Addr: 1404ab35c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab38d) overlaps instruction at (ram,0x0001404ab388)
    */

void FUN_1404ab35c(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)((ulonglong)(in_EAX + 0xb0000a64) ^ 0xc);
  bVar1 = *param_2;
  *param_2 = *param_2 + (byte)param_1;
  if (CARRY1(bVar1,(byte)param_1)) {
    if (*param_2 == 0) {
      *param_1 = *param_1;
      in((short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar3 = *pcVar3 + (char)((ulonglong)param_2 >> 8);
    uVar2 = in((short)param_2);
    pcVar3 = (char *)(ulonglong)uVar2;
  }
  uRam00000001b44fb390 = uRam00000001b44fb390 & (uint)pcVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

