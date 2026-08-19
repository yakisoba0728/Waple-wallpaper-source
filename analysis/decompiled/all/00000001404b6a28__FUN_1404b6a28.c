// Function: FUN_1404b6a28
// Addr: 1404b6a28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6a28(byte *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int *in_RAX;
  uint *puVar8;
  char cVar9;
  byte bVar11;
  char *pcVar10;
  byte unaff_BL;
  undefined1 *unaff_RSI;
  
  *(byte *)((longlong)in_RAX + param_2) =
       *(byte *)((longlong)in_RAX + param_2) | (byte)((ulonglong)in_RAX >> 8);
  param_1[-0x6691ffe5] = param_1[-0x6691ffe5] ^ unaff_BL;
  uVar4 = (int)in_RAX - *in_RAX;
  puVar8 = (uint *)(ulonglong)uVar4;
  *param_1 = *param_1 >> 1;
  *param_1 = *param_1;
  *(byte *)puVar8 = (byte)*puVar8 + (char)uVar4;
  uVar5 = *puVar8;
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  *(byte *)puVar8 = (byte)*puVar8 + bVar11;
  uVar3 = (uint)CARRY1((byte)uVar5,bVar11);
  uVar5 = *puVar8;
  uVar1 = *puVar8;
  uVar7 = (uVar4 - uVar1) - uVar3;
  out(*unaff_RSI,(short)((int)uVar4 >> 0x1f));
  pcVar10 = (char *)(ulonglong)(uint)((int)uVar7 >> 0x1f);
  uVar2 = *(undefined4 *)(ulonglong)uVar7;
  *param_1 = *param_1 >> 1;
  *param_1 = *param_1 + (((char)uVar7 - (char)uVar2) - (uVar4 < uVar5 || uVar4 - uVar1 < uVar3));
  cVar9 = (char)((int)uVar7 >> 0x1f);
  *pcVar10 = *pcVar10 + cVar9;
  cVar6 = in(0x11);
  *pcVar10 = *pcVar10 + cVar9;
  if (*pcVar10 != '\0') {
    *pcVar10 = *pcVar10 + cVar9;
    puVar8 = (uint *)CONCAT71((uint7)(uint3)((int)uVar7 >> 0x1f),0xb);
    *puVar8 = *puVar8 & (int)unaff_RSI + 1U;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001b04b79cd = cRam00000001b04b79cd + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

