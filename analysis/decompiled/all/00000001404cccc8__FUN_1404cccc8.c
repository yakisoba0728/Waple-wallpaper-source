// Function: FUN_1404cccc8
// Addr: 1404cccc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cccc8(char *param_1,ulonglong param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar4;
  uint *in_RAX;
  char *pcVar3;
  char cVar5;
  char *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)in_RAX + (longlong)param_1) =
       *(char *)((longlong)in_RAX + (longlong)param_1) + cVar4;
  cVar5 = (char)(param_2 >> 8);
  unaff_RDI[(longlong)in_RAX] = unaff_RDI[(longlong)in_RAX] + cVar5;
  *(char *)((longlong)in_RAX + -0x3effcacd) =
       *(char *)((longlong)in_RAX + -0x3effcacd) + (char)param_2;
  *param_1 = *param_1 + cVar4;
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                        (byte)(byte *)((ulonglong)in_RAX | 4) | *(byte *)((ulonglong)in_RAX | 4)) +
          0x30000834;
  pcVar3 = (char *)(ulonglong)(uVar2 ^ 0x7e340c35);
  *param_1 = *param_1 + (char)((uVar2 ^ 0x7e340c35) >> 8);
  *pcVar3 = *pcVar3 + ((byte)uVar2 ^ 0x35);
  *pcVar3 = *pcVar3 + cVar5;
  *param_1 = *param_1 + (byte)uVar2;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  pbVar1 = (byte *)((param_2 & 0xffffffff) + 7);
  *pbVar1 = *pbVar1 | (byte)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

