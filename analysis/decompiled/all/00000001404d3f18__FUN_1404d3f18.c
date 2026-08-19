// Function: FUN_1404d3f18
// Addr: 1404d3f18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d3ed8) overlaps instruction at (ram,0x0001404d3ed7)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d3ed7) */

void FUN_1404d3f18(char *param_1,char *param_2,longlong param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  int in_EAX;
  char cVar4;
  char cVar5;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  byte *unaff_RDI;
  char unaff_R12B;
  char unaff_R13B;
  char *pcVar3;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  cVar4 = (char)param_2;
  if (in_EAX + 0x70000668U == 0 || in_EAX < -0x70000668) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + -0x20) = (char)unaff_RSI[-0x20] + cVar5;
  pcVar3 = (char *)((ulonglong)(in_EAX + 0x70000668U) & 0xffffffffffffff3e);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  pcVar3[0x7e] = pcVar3[0x7e] + cVar5;
  if ((char)pcVar3 == '\0') {
    pcVar3[CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                    CONCAT11(cVar5 + *(char *)((longlong)pcVar3 * 2 + 0x2e040235),cVar4)) + -0x14] =
         pcVar3[CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                         CONCAT11(cVar5 + *(char *)((longlong)pcVar3 * 2 + 0x2e040235),cVar4)) +
                -0x14] + unaff_BH;
    pcVar3[(longlong)&stack0x00000000] = pcVar3[(longlong)&stack0x00000000] + unaff_BH;
    *param_1 = *param_1 + unaff_BL;
    uVar2 = (uint)pcVar3 | *unaff_RSI;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
    bVar1 = (byte)uVar2 ^ *unaff_RDI;
    pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1);
    if (param_1 == (char *)0x1 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar3 = *pcVar3 + cVar4;
    *(char *)(param_3 + 0x31) = *(char *)(param_3 + 0x31) + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + (char)param_3;
  *param_2 = *param_2 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

