// Function: FUN_1404c8d90
// Addr: 1404c8d90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8d90(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  out(CONCAT11(0x6c,param_2),(int)(short)in_RAX);
  *param_4 = *param_4 + unaff_BL;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + param_2;
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + param_2;
  pbVar1 = (byte *)((ulonglong)
                    (CONCAT22((char)bVar2 >> 7,
                              CONCAT11(bVar2 | (byte)in_RAX ^ 0x17 | 0xf0,(byte)in_RAX)) ^ 0x17 |
                    0xf0) + 7);
  *pbVar1 = *pbVar1 | 0x6c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

