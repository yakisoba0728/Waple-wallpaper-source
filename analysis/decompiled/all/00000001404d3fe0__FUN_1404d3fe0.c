// Function: FUN_1404d3fe0
// Addr: 1404d3fe0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d402d) overlaps instruction at (ram,0x0001404d402b)
    */

void FUN_1404d3fe0(undefined8 param_1,undefined8 param_2,char *param_3,longlong param_4)

{
  int *piVar1;
  int in_EAX;
  uint uVar2;
  char unaff_BL;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RDI;
  char unaff_R12B;
  char unaff_R13B;
  bool in_CF;
  bool in_ZF;
  char *pcVar3;
  
  if (!in_CF && !in_ZF) {
    *(undefined1 *)(unaff_RDI + 0x4a) = *(undefined1 *)(unaff_RDI + 0x4a);
    piVar1 = (int *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0xc);
    *piVar1 = *piVar1 + unaff_EBP;
    pcVar3 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0xc);
    *pcVar3 = *pcVar3 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in_EAX + 0x11c013e0 + (uint)in_CF;
  pcVar3 = (char *)(ulonglong)uVar2;
  if (SCARRY4(in_EAX,0x11c013e0) != SCARRY4(in_EAX + 0x11c013e0,(uint)in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[0x3f] = pcVar3[0x3f] + unaff_BL;
  *param_3 = *param_3 + unaff_R13B;
  *(char *)(param_4 + 0x3f) = *(char *)(param_4 + 0x3f) + unaff_R12B;
  *param_3 = *param_3 + (char)param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

