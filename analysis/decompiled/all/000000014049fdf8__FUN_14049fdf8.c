// Function: FUN_14049fdf8
// Addr: 14049fdf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049fe2e) overlaps instruction at (ram,0x00014049fe2d)
    */

void FUN_14049fdf8(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong in_RAX;
  ulonglong uVar8;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  byte *unaff_RDI;
  char *pcVar7;
  
  *param_4 = *param_4 + (char)in_RAX;
  uVar5 = (uint)in_RAX | *(uint *)(in_RAX * 2);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
  uVar2 = (undefined3)(uVar5 >> 8);
  bVar3 = (byte)uVar5 ^ *unaff_RDI;
  uVar5 = CONCAT31(uVar2,bVar3);
  uVar8 = param_1 - 1;
  if (uVar8 == 0 || bVar3 == 0) {
    uVar5 = CONCAT31(uVar2,bVar3 | *(byte *)((longlong)(ulonglong)uVar5 * 2));
    bVar3 = unaff_RDI[uVar5];
    iVar6 = uVar5 + 0x90000664;
    uVar2 = (undefined3)((uint)iVar6 >> 8);
    bVar4 = (byte)iVar6 | *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    pcVar7 = (char *)(ulonglong)CONCAT31(uVar2,bVar4);
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3000030a);
    *pcVar1 = *pcVar1 + (char)(uVar8 >> 8);
    *param_4 = *param_4 + unaff_SPL;
    *pcVar7 = *pcVar7 + bVar4;
    pcVar7[-0x54fffcf6] = pcVar7[-0x54fffcf6] + (char)param_2;
    uVar5 = CONCAT31(uVar2,bVar4 | *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(char *)(ulonglong)uVar5 =
         *(char *)(ulonglong)uVar5 + ((byte)((ulonglong)param_2 >> 8) | bVar3);
  }
  else {
    uVar5 = uVar5 + *(int *)(ulonglong)uVar5;
    uVar8 = uVar8 & 0xff;
  }
  *param_4 = *param_4 + (char)uVar5;
  bVar3 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + (byte)uVar8;
  if (!CARRY1(bVar3,(byte)uVar8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001b44efe50 = uRam00000001b44efe50 & uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

