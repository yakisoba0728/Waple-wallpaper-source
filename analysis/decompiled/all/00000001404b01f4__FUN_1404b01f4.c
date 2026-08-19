// Function: FUN_1404b01f4
// Addr: 1404b01f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b01f4(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar5;
  undefined8 in_RAX;
  undefined6 uVar6;
  uint *puVar3;
  longlong lVar4;
  char cVar7;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int *unaff_RDI;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar5 = (char)((ulonglong)in_RAX >> 8) + cVar7;
  puVar3 = (uint *)CONCAT62(uVar6,CONCAT11(cVar5 * '\x02',
                                           (byte)in_RAX &
                                           *(byte *)CONCAT62(uVar6,CONCAT11(cVar5,(byte)in_RAX))));
  uVar2 = (uint)puVar3 & *puVar3;
  lVar4 = (ulonglong)CONCAT21((short)(uVar2 >> 0x10),(char)(uVar2 >> 8) + (char)uVar2) * 0x100;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + unaff_RBP);
  *pcVar1 = *pcVar1 + cVar7;
  cVar5 = (char)((ulonglong)lVar4 >> 8);
  *(char *)(param_2 + unaff_RBP) = *(char *)(param_2 + unaff_RBP) + cVar5;
  *(char *)(param_1 + unaff_RBP) = *(char *)(param_1 + unaff_RBP) + cVar7;
  pcVar1 = (char *)(lVar4 + 0xd);
  *pcVar1 = *pcVar1 + cVar5;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *unaff_RDI = *unaff_RDI + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

