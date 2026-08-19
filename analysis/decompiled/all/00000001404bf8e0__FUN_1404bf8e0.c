// Function: FUN_1404bf8e0
// Addr: 1404bf8e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bf90e) overlaps instruction at (ram,0x0001404bf90d)
    */

void FUN_1404bf8e0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar4;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  char cVar5;
  char cVar6;
  undefined6 uVar7;
  char *unaff_RBX;
  char unaff_SPL;
  longlong unaff_RDI;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  iVar2 = in_EAX + 0xa0000a54;
  if (0x5ffff5ab < in_EAX || iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (byte)((uint)iVar2 >> 8);
  cVar5 = (byte)param_1 + bVar4;
  if (CARRY1((byte)param_1,bVar4) || cVar5 == '\0') {
    *(char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) =
         *(char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = CONCAT31(CONCAT21((short)((uint)iVar2 >> 0x10),bVar4 + (char)((ulonglong)param_2 >> 8)),
                   uRamf4002776e1002776) + 0x90000d64;
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 ^ 0x47002779;
    if ((POPCOUNT(uVar3 & 0xff) & 1U) != 0) {
      pcVar1 = (char *)((ulonglong)uVar3 + 0x4b + unaff_RDI * 8);
      *pcVar1 = *pcVar1 + (char)uVar3;
      *(char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) =
           *(char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) + (char)(uVar3 >> 8);
      pcVar1 = (char *)((ulonglong)uVar3 * 2);
      *pcVar1 = *pcVar1 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBX = *unaff_RBX + cVar6;
  if (*unaff_RBX < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

