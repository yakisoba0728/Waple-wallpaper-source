// Function: FUN_1404d1d40
// Addr: 1404d1d40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1d40(char *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  char cVar4;
  uint *in_RAX;
  char *pcVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  uVar2 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar2;
  cVar1 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  pcVar3 = (char *)(ulonglong)(uVar2 ^ 0x4d1c4800);
  cVar4 = (char)((uVar2 ^ 0x4d1c4800) >> 8);
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar4;
  pcVar3 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8),0x35)) + 0x16d80035 +
                   unaff_RSI * 4);
  *pcVar3 = *pcVar3 + cVar1;
  *param_1 = *param_1 + unaff_BL;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1;
  *unaff_RDI = *unaff_RDI + '5';
  *unaff_RDI = *unaff_RDI + '5';
  pcVar3 = (char *)(ulonglong)((uVar2 ^ 0x4d1c48d1) + (int)param_1);
  *pcVar3 = *pcVar3 + '5';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

