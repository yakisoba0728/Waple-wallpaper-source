// Function: FUN_1404b62c8
// Addr: 1404b62c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b62c8(char *param_1,byte param_2)

{
  byte *pbVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort uVar4;
  char cVar5;
  byte bVar11;
  short sVar6;
  uint uVar7;
  undefined8 in_RAX;
  char *pcVar10;
  char *unaff_RSI;
  longlong unaff_RDI;
  int *piVar8;
  ushort *puVar9;
  
  cVar5 = (byte)in_RAX + 0x74;
  piVar8 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
  *(char *)piVar8 = (char)*piVar8 + cVar5 + (0x8b < (byte)in_RAX);
  unaff_RSI[0x1b] = unaff_RSI[0x1b] & (byte)((ulonglong)in_RAX >> 8);
  pbVar1 = (byte *)(unaff_RDI + 0x66);
  bVar11 = *pbVar1;
  *pbVar1 = *pbVar1 + param_2;
  uVar7 = ((int)piVar8 - *piVar8) - (uint)CARRY1(bVar11,param_2);
  puVar9 = (ushort *)(ulonglong)uVar7;
  bVar11 = (byte)(uVar7 >> 8);
  *param_1 = *param_1 + bVar11;
  *(byte *)puVar9 = (byte)*puVar9 + (char)uVar7;
  uVar4 = *puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + bVar11;
  uVar4 = (ushort)CARRY1((byte)uVar4,bVar11);
  uVar2 = (ushort)uVar7 - *puVar9;
  uVar3 = (undefined2)(uVar7 >> 0x10);
  sVar6 = uVar2 - uVar4;
  sVar6 = (sVar6 - *(short *)(ulonglong)CONCAT22(uVar3,sVar6)) -
          (ushort)((ushort)uVar7 < *puVar9 || uVar2 < uVar4);
  pcVar10 = (char *)(ulonglong)CONCAT22(uVar3,sVar6);
  *param_1 = *param_1 + (char)((ushort)sVar6 >> 8);
  *unaff_RSI = *unaff_RSI + (char)sVar6;
  *pcVar10 = *pcVar10 + (char)sVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

