// Function: FUN_1404c445c
// Addr: 1404c445c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c445c(int param_1,int *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  byte bVar7;
  undefined8 in_RAX;
  byte bVar9;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RDI;
  byte in_CF;
  bool bVar10;
  longlong lVar8;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar7 = (byte)in_RAX;
  bVar10 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',in_CF);
  lVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar7 * '\x02' + in_CF);
  pbVar1 = (byte *)(lVar8 + 1);
  bVar7 = *pbVar1;
  bVar5 = *pbVar1 + bVar9;
  *pbVar1 = bVar5 + bVar10;
  iVar4 = *param_2;
  bVar3 = *(byte *)CONCAT71(unaff_00000019,unaff_BL);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  puVar2 = (undefined1 *)
           ((ulonglong)(((int)lVar8 - iVar4) - (uint)(CARRY1(bVar7,bVar9) || CARRY1(bVar5,bVar10)))
           + (longlong)param_2 * 2);
  bVar7 = ((byte)param_1 & 0x1f) % 9;
  uVar6 = CONCAT11(CARRY1(bVar3,unaff_BL),*puVar2);
  uVar6 = uVar6 << bVar7 | uVar6 >> 9 - bVar7;
  *puVar2 = (char)uVar6;
  *unaff_RDI = *unaff_RDI + param_1 + (uint)((uVar6 & 0x100) != 0);
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

