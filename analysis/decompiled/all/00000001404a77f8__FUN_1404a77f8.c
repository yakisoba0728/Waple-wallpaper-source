// Function: FUN_1404a77f8
// Addr: 1404a77f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a77f8(char *param_1,char *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint *in_RAX;
  char cVar6;
  byte bVar7;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  bVar5 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar5;
  if (!SCARRY1((byte)uVar4,bVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + unaff_BH;
  bVar7 = (byte)param_2;
  cVar6 = (char)param_1;
  if (CARRY1((byte)uVar4,unaff_BH) || (byte)*in_RAX == 0) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *(byte *)in_RAX = (byte)*in_RAX + bVar5;
    *(byte *)in_RAX = (byte)*in_RAX + (char)((ulonglong)param_2 >> 8);
    pbVar1 = (byte *)((longlong)in_RAX + 0x38000a39);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar7;
    if (CARRY1(bVar3,bVar7) || *pbVar1 == 0) {
      *param_1 = *param_1 + bVar5;
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | bVar5;
      *(byte *)in_RAX = (byte)*in_RAX + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    puVar2 = in_RAX + 0x1f00028f;
    uVar4 = *puVar2;
    *(byte *)puVar2 = (byte)*puVar2 + unaff_BL;
    if (!CARRY1((byte)uVar4,unaff_BL) && (byte)*puVar2 != 0) {
      *param_2 = *param_2 + bVar7;
      *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (int)param_2;
      *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + bVar5;
    *unaff_RDI = *unaff_RDI + cVar6;
  }
  *(uint *)(in_FS_OFFSET + (longlong)in_RAX) =
       *(uint *)(in_FS_OFFSET + (longlong)in_RAX) | (uint)in_RAX;
  sysenter();
  *(byte *)in_RAX = (byte)*in_RAX | bVar5;
  rdmsr((int)param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

