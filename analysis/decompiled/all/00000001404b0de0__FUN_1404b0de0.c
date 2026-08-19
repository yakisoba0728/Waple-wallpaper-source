// Function: FUN_1404b0de0
// Addr: 1404b0de0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0de0(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char cVar5;
  uint *in_RAX;
  undefined6 uVar6;
  uint *puVar4;
  longlong lVar7;
  int *piVar8;
  char cVar9;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESI;
  byte *unaff_RDI;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX | (byte)*in_RAX;
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar5 = (char)((ulonglong)in_RAX >> 8) + cVar9;
  puVar4 = (uint *)CONCAT62(uVar6,CONCAT11(cVar5 * '\x02',
                                           bVar2 | *(byte *)CONCAT62(uVar6,CONCAT11(cVar5,bVar2))));
  uVar3 = (uint)puVar4 | *puVar4;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + param_2);
  *pcVar1 = *pcVar1 + cVar9;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)(uVar3 >> 8);
  param_1[param_2] = param_1[param_2] + (byte)param_2;
  unaff_RDI[-0x68b6ffeb] = unaff_RDI[-0x68b6ffeb] & (byte)param_2;
  *param_1 = *param_1 + (char)uVar3;
  *unaff_RDI = *unaff_RDI + (byte)param_1;
  bVar2 = (byte)param_1 ^ *(byte *)CONCAT44(unaff_0000001c,unaff_EBX);
  lVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar2);
  piVar8 = (int *)(lVar7 + -1);
  if (piVar8 == (int *)0x0 || bVar2 == 0) {
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  }
  *piVar8 = *piVar8 + unaff_EBX;
  piVar8 = (int *)(lVar7 + 0x153218ff);
  *piVar8 = *piVar8 - unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

