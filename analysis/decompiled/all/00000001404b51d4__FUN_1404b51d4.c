// Function: FUN_1404b51d4
// Addr: 1404b51d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b51f1) overlaps instruction at (ram,0x0001404b51ec)
    */

void FUN_1404b51d4(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *in_RAX;
  char cVar2;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *unaff_RDI = *unaff_RSI;
  if (!in_CF && !in_ZF) {
    in_RAX[param_2 * 2 + 0x21004b] = in_RAX[param_2 * 2 + 0x21004b] + unaff_BL;
    *in_RAX = *in_RAX + (char)in_RAX;
    *(char *)((longlong)unaff_RSI + 0x1e) = *(char *)((longlong)unaff_RSI + 0x1e) + cVar2;
    pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x68001a76);
    *pcVar1 = *pcVar1 + unaff_BL;
    uRam00000001a45051f4 = uRam00000001a45051f4 & (uint)in_RAX;
  }
  in_RAX[0x1a] = in_RAX[0x1a] >> 1;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x79);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RBP + 0x79) = *(char *)(unaff_RBP + 0x79) + cVar2;
  *param_4 = *param_4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

