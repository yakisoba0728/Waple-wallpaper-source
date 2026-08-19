// Function: FUN_1404cccd8
// Addr: 1404cccd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cccd8(char *param_1,ulonglong param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong in_RAX;
  char *pcVar3;
  int *unaff_RBX;
  char *unaff_RDI;
  
  *unaff_RBX = *unaff_RBX << 0x15;
  unaff_RDI[(longlong)(param_1 + 0xc21004b)] =
       unaff_RDI[(longlong)(param_1 + 0xc21004b)] + (char)in_RAX;
  uVar2 = (int)CONCAT71((int7)(in_RAX >> 8),(byte)(byte *)(in_RAX | 100) | *(byte *)(in_RAX | 100))
          + 0x30000834;
  pcVar3 = (char *)(ulonglong)(uVar2 ^ 0x7e340c35);
  *param_1 = *param_1 + (char)((uVar2 ^ 0x7e340c35) >> 8);
  *pcVar3 = *pcVar3 + ((byte)uVar2 ^ 0x35);
  *pcVar3 = *pcVar3 + (char)(param_2 >> 8);
  *param_1 = *param_1 + (byte)uVar2;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  pbVar1 = (byte *)((param_2 & 0xffffffff) + 7);
  *pbVar1 = *pbVar1 | (byte)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

