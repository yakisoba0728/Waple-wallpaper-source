// Function: FUN_1404bc044
// Addr: 1404bc044
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc0bf) overlaps instruction at (ram,0x0001404bc0bd)
    */

void FUN_1404bc044(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  undefined7 uVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  undefined1 *puVar5;
  byte *pbVar6;
  char *pcVar7;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  undefined1 auStack_37 [47];
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  puVar5 = (undefined1 *)(ulonglong)((uint)in_RAX & 0x26d80000);
  *puVar5 = *puVar5;
  iRam00000000a8000028 = iRam00000000a8000028 + 0x57ffffd8;
  cRam0000000030000052 = cRam0000000030000052 + unaff_BL;
  uVar4 = 0xa8000028 - iRam00000000a8000028;
  pcVar7 = (char *)(ulonglong)uVar4;
  pcVar7[0x2c] = pcVar7[0x2c] + unaff_BH;
  *pcVar7 = *pcVar7 + (char)uVar4;
  unaff_RDI[0x21004b] = unaff_RDI[0x21004b] & unaff_BH;
  uVar4 = uVar4 >> 8 & 0x26d800;
  pcVar7 = (char *)(ulonglong)(uVar4 << 8);
  *pcVar7 = *pcVar7;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = unaff_BH;
  *pcVar7 = *pcVar7;
  if (*pcVar7 < '\0') {
    *pcVar7 = *pcVar7 + unaff_BH;
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    pcVar7 = (char *)((ulonglong)(uint3)uVar4 << 8);
  }
  *pcVar7 = *pcVar7;
  uVar2 = (undefined7)((ulonglong)pcVar7 >> 8);
  pbVar6 = (byte *)CONCAT71(uVar2,0xbf);
  *param_4 = *param_4 + (char)auStack_37;
  *pbVar6 = *pbVar6 + 0xbf;
  *pbVar6 = *pbVar6 + 0xbf;
  bVar3 = *pbVar6 & 0xbf & *(byte *)(CONCAT71(uVar2,*pbVar6) & 0xffffffffffffffbf);
  puRamfffffffffffffff8 = &stack0xfffffffffffffff8;
  uRam00000001a450c0d0 =
       uRam00000001a450c0d0 &
       (int)CONCAT71(uVar2,bVar3 + *(char *)CONCAT71(uVar2,bVar3)) + 0xc0000654U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

