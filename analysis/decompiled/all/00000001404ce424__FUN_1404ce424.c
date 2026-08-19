// Function: FUN_1404ce424
// Addr: 1404ce424
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce4d4) overlaps instruction at (ram,0x0001404ce4d3)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ce441) */
/* WARNING: Removing unreachable block (ram,0x0001404ce44a) */
/* WARNING: Removing unreachable block (ram,0x0001404ce465) */
/* WARNING: Removing unreachable block (ram,0x0001404ce42d) */
/* WARNING: Removing unreachable block (ram,0x0001404ce434) */
/* WARNING: Removing unreachable block (ram,0x0001404ce469) */
/* WARNING: Removing unreachable block (ram,0x0001404ce473) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4bf) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4d2) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4cb) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4cd) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4d3) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4da) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4e8) */

void FUN_1404ce424(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *in_RAX;
  char *pcVar2;
  char unaff_BH;
  longlong unaff_RBP;
  char *unaff_RSI;
  
  *param_2 = *param_2 + (char)param_1;
  *(char *)(unaff_RBP + 3) = *(char *)(unaff_RBP + 3) + unaff_BH;
  cVar1 = *unaff_RSI;
  *(char *)(unaff_RBP + 5) = *(char *)(unaff_RBP + 5) + unaff_BH;
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) + cVar1 + *unaff_RSI,
                                     (char)param_1));
  *in_RAX = *in_RAX + (char)in_RAX;
  *pcVar2 = *pcVar2 + (char)param_2;
  uRam00000001458eed3b = uRam00000001458eed3b | (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

