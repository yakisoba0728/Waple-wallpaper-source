// Function: FUN_14049e31c
// Addr: 14049e31c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e31c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *in_RAX;
  char cVar3;
  byte bVar4;
  undefined6 uVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)param_1;
  uVar2 = *in_RAX;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x69b002);
  *pbVar1 = *pbVar1 | bVar4;
  cVar3 = (char)param_2 + unaff_BH;
  uVar2 = *(int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)uVar2) * 0x49e23c00;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *(undefined1 *)CONCAT62(uVar5,CONCAT11(bVar4,cVar3)) =
       *(undefined1 *)CONCAT62(uVar5,CONCAT11(bVar4,cVar3));
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

