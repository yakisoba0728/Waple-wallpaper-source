// Function: FUN_1404a7830
// Addr: 1404a7830
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7830(byte *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *in_RAX;
  char cVar5;
  byte bVar6;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar4;
  
  *param_1 = *param_1 ^ unaff_BH;
  bVar3 = (byte)in_RAX | *in_RAX;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  bVar2 = *pbVar4;
  *pbVar4 = *pbVar4 + unaff_BH;
  bVar6 = (byte)param_2;
  cVar5 = (char)param_1;
  if (CARRY1(bVar2,unaff_BH) || *pbVar4 == 0) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *pbVar4 = *pbVar4 + bVar3;
    *pbVar4 = *pbVar4 + (char)((ulonglong)param_2 >> 8);
    pbVar1 = pbVar4 + 0x38000a39;
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar6;
    if (CARRY1(bVar2,bVar6) || *pbVar1 == 0) {
      *param_1 = *param_1 + bVar3;
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | bVar3;
      *pbVar4 = *pbVar4 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    pbVar1 = pbVar4 + 0x7c000a3c;
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    if (!CARRY1(bVar2,unaff_BL) && *pbVar1 != 0) {
      *param_2 = *param_2 + bVar6;
      *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (int)param_2;
      *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + bVar3;
    *unaff_RDI = *unaff_RDI + cVar5;
  }
  *(uint *)(pbVar4 + in_FS_OFFSET) = *(uint *)(pbVar4 + in_FS_OFFSET) | (uint)pbVar4;
  sysenter();
  *pbVar4 = *pbVar4 | bVar3;
  rdmsr((int)param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

