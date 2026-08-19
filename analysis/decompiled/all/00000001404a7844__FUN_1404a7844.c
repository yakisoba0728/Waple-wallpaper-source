// Function: FUN_1404a7844
// Addr: 1404a7844
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7844(char *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *in_RAX;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong in_FS_OFFSET;
  
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + unaff_BH;
  bVar2 = (byte)in_RAX;
  if (CARRY1(bVar1,unaff_BH) || *in_RAX == 0) {
    *param_1 = *param_1 + bVar2;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | bVar2;
    *in_RAX = *in_RAX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(in_RAX + in_FS_OFFSET) = *(uint *)(in_RAX + in_FS_OFFSET) | (uint)in_RAX;
  sysenter();
  *in_RAX = *in_RAX | bVar2;
  rdmsr((int)param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

