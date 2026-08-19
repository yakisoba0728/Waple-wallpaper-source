// Function: FUN_14049edb0
// Addr: 14049edb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049ede6) overlaps instruction at (ram,0x00014049ede5)
    */

void FUN_14049edb0(uint *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *in_RAX;
  byte bVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RBP;
  uint unaff_EDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  undefined1 in_XMM1 [16];
  uint *puVar5;
  int *piVar6;
  
  uVar4 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar4;
  uVar3 = *in_RAX;
  cVar2 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar2;
  bVar7 = (byte)((ushort)param_2 >> 8);
  if (!SCARRY1((char)uVar3,cVar2)) {
    *in_RAX = *in_RAX + uVar4;
    *(byte *)param_1 = (byte)*param_1 ^ (byte)unaff_EDI;
    pcVar1 = (char *)((ulonglong)unaff_EDI + 0x10049ec);
    *pcVar1 = *pcVar1 + unaff_BH;
    *(char *)((ulonglong)in_RAX & 0xffffffff) =
         *(char *)((ulonglong)in_RAX & 0xffffffff) + (char)param_1;
    uVar3 = unaff_EDI | *(uint *)(in_FS_OFFSET + (ulonglong)unaff_EDI);
    sysenter();
    rsqrtps(in_XMM1,*(undefined1 (*) [16])CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    uVar4 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3) + 0x54050002;
    puVar5 = (uint *)(ulonglong)uVar4;
    *puVar5 = *puVar5 | uVar4;
    *(byte *)param_1 = (byte)*param_1 ^ bVar7;
    *puVar5 = *puVar5 + uVar4;
    *(uint *)(unaff_GS_OFFSET + (longlong)param_1) =
         *(uint *)(unaff_GS_OFFSET + (longlong)param_1) ^ uVar4;
    cVar2 = in(param_2);
    uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar2);
    piVar6 = (int *)(ulonglong)uVar3;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)piVar6 = (char)*piVar6 + cVar2;
    *(byte *)piVar6 = (char)*piVar6 + bVar7;
    *param_1 = *param_1 ^ uVar3;
    *(char *)(unaff_RBP + 0x31) = *(char *)(unaff_RBP + 0x31) + (char)(uVar4 >> 8);
    *piVar6 = *piVar6 + uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)in_RAX = (char)*in_RAX + cVar2;
  *(byte *)param_1 = (byte)*param_1 ^ bVar7;
  *in_RAX = *in_RAX + uVar4;
  *(uint *)(unaff_GS_OFFSET + (longlong)param_1) =
       *(uint *)(unaff_GS_OFFSET + (longlong)param_1) ^ uVar4;
  cVar2 = in(param_2);
  *param_4 = *param_4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

