// Function: FUN_1404d80c8
// Addr: 1404d80c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d80c8(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int *in_RAX;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  uint auStack_8 [2];
  char *pcVar4;
  
  cVar1 = (char)(unaff_RDI + 1);
  *unaff_RDI = (char)in_RAX;
  *in_RAX = *in_RAX + (int)param_2;
  uVar3 = (int)in_RAX + 0x3781000;
  pcVar4 = (char *)(ulonglong)uVar3;
  *param_2 = *param_2 + (char)param_1;
  auStack_8[0] = 0xc2040002;
  auStack_8[1] = 0xffffffff;
  *pcVar4 = *pcVar4 + (char)uVar3;
  *(uint *)((longlong)auStack_8 + (longlong)pcVar4) =
       *(uint *)((longlong)auStack_8 + (longlong)pcVar4) & (uint)param_1;
  pcVar4[(longlong)(unaff_RDI + 1) * 2] = pcVar4[(longlong)(unaff_RDI + 1) * 2] + (char)param_1;
  uVar3 = (int)in_RAX + 0x9e01600;
  pcVar4 = (char *)(ulonglong)uVar3;
  cVar2 = (char)uVar3;
  pcVar4[-8] = pcVar4[-8] + cVar2;
  cRam00000001584dc2ee = cRam00000001584dc2ee + cVar1;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)((longlong)pcVar4 * 2) = *(char *)((longlong)pcVar4 * 2) + cVar2;
  pcVar4[5] = pcVar4[5] + auStack_8[0]._1_1_;
  *pcVar4 = *pcVar4 + cVar2;
  cRam00000001584dc306 = cRam00000001584dc306 + cVar1;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

