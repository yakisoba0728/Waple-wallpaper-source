// Function: FUN_1404c3614
// Addr: 1404c3614
// Size: 1 bytes


void FUN_1404c3614(byte *param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint *in_RAX;
  char unaff_BL;
  longlong unaff_RDI;
  char unaff_R12B;
  bool in_OF;
  uint *puVar5;
  
  if (!in_OF) {
    uVar2 = (uint)in_RAX - *in_RAX;
    puVar5 = (uint *)(ulonglong)uVar2;
    *(byte *)(unaff_RDI + 0x3524002b) =
         *(byte *)(unaff_RDI + 0x3524002b) >> 1 | ((uint)in_RAX < *in_RAX) << 7;
    *param_1 = *param_1 + unaff_R12B;
    *(char *)puVar5 = (char)*puVar5 + (char)uVar2;
    *(char *)((longlong)puVar5 + -0x61) =
         *(char *)((longlong)puVar5 + -0x61) + (char)((ulonglong)param_2 >> 8);
    uVar3 = uVar2 - *puVar5;
    *(byte *)(unaff_RDI + 0x3524002b) =
         *(byte *)(unaff_RDI + 0x3524002b) >> 1 | (uVar2 < *puVar5) << 7;
    bVar1 = *param_1;
    *param_1 = *param_1 + param_3;
    *param_1 = (*param_1 - (char)uVar3) - CARRY1(bVar1,param_3);
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + unaff_BL;
    return;
  }
  pcVar4 = (char *)((ulonglong)in_RAX ^ 0x4c);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 | (byte)pcVar4;
  *pcVar4 = *pcVar4 + (char)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

