// Function: FUN_14049f650
// Addr: 14049f650
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f5f9) overlaps instruction at (ram,0x00014049f5f8)
    */

void FUN_14049f650(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong in_RAX;
  int *piVar8;
  char cVar9;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  longlong in_FS_OFFSET;
  uint *unaff_retaddr;
  undefined8 uStackX_8;
  uint *puVar7;
  
  bVar3 = (byte)in_RAX ^ 0x92;
  puVar7 = (uint *)(in_RAX ^ 0x92);
  uVar2 = *puVar7;
  uVar5 = (uint)puVar7;
  *puVar7 = *puVar7 + uVar5;
  cVar9 = (char)((ulonglong)param_2 >> 8);
  if (!CARRY4(uVar2,uVar5) && *puVar7 != 0) {
    *param_4 = *param_4;
    *(byte *)puVar7 = (char)*puVar7 + bVar3;
    *(char *)((longlong)puVar7 + -0x72fffe79) = *(char *)((longlong)puVar7 + -0x72fffe79) + cVar9;
    *(byte *)(ulonglong)(uVar5 + 0xf4f80001) = bVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *puVar7 = *puVar7 + uVar5;
  *param_4 = *param_4 + '\b';
  cVar4 = (char)unaff_retaddr;
  *(char *)unaff_retaddr = (char)*unaff_retaddr + cVar4;
  *(char *)((longlong)param_2 * 5) = *(char *)((longlong)param_2 * 5) + cVar9;
  uVar2 = *unaff_retaddr;
  uVar5 = (uint)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + uVar5;
  if (CARRY4(uVar2,uVar5) || *unaff_retaddr == 0) {
    *unaff_retaddr = *unaff_retaddr + uVar5;
    *param_4 = *param_4 + '\x10';
    *uStackX_8 = *uStackX_8 + (char)uStackX_8;
    *uStackX_8 = *uStackX_8 + (char)((ulonglong)uStackX_8 >> 8);
    piVar8 = (int *)((ulonglong)param_2 & 0xffffffff);
    *piVar8 = *piVar8 + (int)param_2;
    piVar8 = (int *)((ulonglong)piVar8 ^ 0x92);
    *piVar8 = *piVar8 + (int)piVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + cVar4;
  uVar2 = *unaff_RSI;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)((uVar5 & uVar2) >> 8);
  uVar6 = (ulonglong)(uVar5 & uVar2) ^ 7;
  *param_2 = *param_2 + cVar4 + '\x01';
  pbVar1 = (byte *)(in_FS_OFFSET + uVar6);
  *pbVar1 = *pbVar1 | (byte)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

