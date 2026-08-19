// Function: FUN_1404c58f4
// Addr: 1404c58f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c58f4(char *param_1,char *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar8;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  byte bVar9;
  byte unaff_BL;
  undefined7 unaff_00000019;
  byte *unaff_RDI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  char *unaff_retaddr;
  byte bStackX_8;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = ((char)in_RAX + -0x30) * '\x02' & (byte)param_2;
  *(char *)CONCAT71(uVar8,bVar4) = *(char *)CONCAT71(uVar8,bVar4) + (byte)param_2;
  piVar5 = (int *)CONCAT71(uVar8,bVar4);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *piVar5 = *piVar5 - (int)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  if (*param_1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  LOCK();
  bVar2 = *(byte *)(in_FS_OFFSET + (longlong)piVar5);
  *(byte *)(in_FS_OFFSET + (longlong)piVar5) = bVar4;
  UNLOCK();
  puVar6 = (undefined4 *)CONCAT71(uVar8,bVar2 + 0x54 + CARRY1(bVar1,unaff_BL));
  LOCK();
  uVar3 = *puVar6;
  *puVar6 = (int)puVar6;
  pcVar7 = (char *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar3);
  UNLOCK();
  pcVar7[(longlong)param_1 * 4] = pcVar7[(longlong)param_1 * 4] | bVar9;
  pcVar7[-0x5a] = pcVar7[-0x5a] + bVar9;
  *param_2 = *param_2 + (char)uVar3;
  *pcVar7 = *pcVar7 + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  unaff_retaddr[-0x5a] = unaff_retaddr[-0x5a] + bVar9;
  *param_2 = *param_2 + (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + unaff_BL;
  *param_1 = *param_1 + param_3;
  bVar4 = (byte)uRam0000000144b06437;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *param_1 = *param_1 + ((bStackX_8 | bVar4) ^ 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

