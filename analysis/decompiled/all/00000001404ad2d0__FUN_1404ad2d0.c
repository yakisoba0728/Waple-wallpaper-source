// Function: FUN_1404ad2d0
// Addr: 1404ad2d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad2d0(byte *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar4;
  undefined3 uVar5;
  char cVar6;
  uint *puVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint uVar9;
  ulonglong unaff_RSI;
  longlong in_FS_OFFSET;
  uint uVar3;
  char *pcVar7;
  
  uVar9 = (uint)unaff_RSI;
  puVar8 = (uint *)(unaff_RSI & 0xffffffff);
  uVar2 = *puVar8;
  uVar3 = *puVar8;
  *puVar8 = *puVar8 + uVar9;
  if (*puVar8 == 0 || SCARRY4(uVar3,uVar9) != (int)*puVar8 < 0) {
    *puVar8 = *puVar8 + uVar9 + (uint)CARRY4(uVar2,uVar9);
    func_0x0001414b1dba();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar8 = (byte)*puVar8 | (byte)unaff_RSI;
  uVar5 = (undefined3)(unaff_RSI >> 8);
  cVar6 = in(8);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar5,cVar6);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) != '\0') {
    bVar1 = *param_1;
    *param_1 = *param_1 + param_2;
    uVar4 = LocalDescriptorTableRegister();
    *(undefined4 *)(in_FS_OFFSET + 0xe04ae0e1) = uVar4;
    *(int *)((ulonglong)&stack0x00000000 & 0xffffffff) =
         *(int *)((ulonglong)&stack0x00000000 & 0xffffffff) + (int)&stack0x00000000 +
         (uint)CARRY1(bVar1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar7[0x21004ad1] = pcVar7[0x21004ad1] + unaff_BL;
  *pcVar7 = *pcVar7 + (char)param_1;
  *pcVar7 = *pcVar7 + cVar6;
  cVar6 = in(8);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar5,cVar6);
  *pcVar7 = *pcVar7 + cVar6;
  if (*pcVar7 != '\0') {
    *pcVar7 = *pcVar7 + cVar6;
    uVar4 = LocalDescriptorTableRegister();
    *(undefined4 *)(pcVar7 + in_FS_OFFSET) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar7[0x1004ad1] = pcVar7[0x1004ad1] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

