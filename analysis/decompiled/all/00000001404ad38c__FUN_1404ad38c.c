// Function: FUN_1404ad38c
// Addr: 1404ad38c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad38c(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  short in_AX;
  uint uVar5;
  uint uVar6;
  byte bVar8;
  int unaff_EBX;
  uint *unaff_RDI;
  char *in_R11;
  uint *puVar7;
  
  bVar8 = (byte)param_1;
  uVar5 = (uint)in_AX;
  puVar7 = (uint *)(ulonglong)uVar5;
  *param_2 = *param_2 >> (bVar8 & 7) | *param_2 << 8 - (bVar8 & 7);
  *puVar7 = *puVar7 & uVar5;
  *(char *)puVar7 = (char)*puVar7 + (char)in_AX;
  puVar2 = unaff_RDI + 1;
  uVar3 = (uint)(uVar5 < *unaff_RDI);
  uVar6 = *puVar7;
  uVar1 = *puVar7;
  uVar4 = *puVar7 + uVar5;
  *puVar7 = uVar4 + uVar3;
  if (SCARRY4(uVar1,uVar5) != SCARRY4(uVar4,uVar3)) {
    *puVar7 = *puVar7 + uVar5 + (uint)(CARRY4(uVar6,uVar5) || CARRY4(uVar4,uVar3));
    uVar6 = (uint)in_AX;
    *param_2 = *param_2 >> (bVar8 & 7) | *param_2 << 8 - (bVar8 & 7);
    *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 & uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar7 = *puVar7 + uVar5 + (uint)((uVar5 & 0x100) != 0);
  *param_2 = *param_2 >> (bVar8 & 7) | *param_2 << 8 - (bVar8 & 7);
  *(int *)(param_2 + (longlong)param_1) = *(int *)(param_2 + (longlong)param_1) + unaff_EBX;
  param_1[(longlong)puVar7] = param_1[(longlong)puVar7] + (char)unaff_EBX;
  LOCK();
  uVar6 = *puVar7;
  *puVar7 = uVar5;
  UNLOCK();
  *(char *)puVar2 = (char)*puVar2 << 1 | (char)*puVar2 < '\0';
  *in_R11 = *in_R11 + ((byte)(uVar6 | 0x9e00bf0) | *(byte *)((ulonglong)(uVar6 | 0x9e00bf0) * 2) |
                      *param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

