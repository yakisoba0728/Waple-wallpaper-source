// Function: FUN_1404cc650
// Addr: 1404cc650
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc650(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  char cVar3;
  byte *in_RAX;
  char cVar4;
  char cVar5;
  undefined6 uVar6;
  longlong unaff_RBP;
  int unaff_ESI;
  char *pcVar2;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  uRam000000013471c65e = uRam000000013471c65e & (uint)&stack0x00000000;
  uVar1 = ((int)in_RAX + -0x15003fe4) - (uint)(*in_RAX < (byte)in_RAX);
  pcVar2 = (char *)(ulonglong)uVar1;
  if (uVar1 != 0) {
    *pcVar2 = *pcVar2 + (char)param_1;
    cVar4 = (char)param_1 + cVar5;
    iRam000000018d12326f = iRam000000018d12326f + unaff_ESI;
    cVar3 = (char)(uVar1 >> 8);
    *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) =
         *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) + cVar3;
    *pcVar2 = *pcVar2 + (char)uVar1;
    *pcVar2 = *pcVar2 + cVar3;
    iRam00000001754eaf7b = iRam00000001754eaf7b + unaff_ESI;
    pcVar2 = (char *)(unaff_RBP + 0x4c + (longlong)pcVar2 * 8);
    *pcVar2 = *pcVar2 + cVar5;
    *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) =
         *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) + (char)uVar1;
    pcVar2 = (char *)(param_2 + ((ulonglong)uVar1 | 5) * 2);
    *pcVar2 = *pcVar2 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

