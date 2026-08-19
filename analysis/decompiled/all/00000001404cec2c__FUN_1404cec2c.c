// Function: FUN_1404cec2c
// Addr: 1404cec2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cec43) overlaps instruction at (ram,0x0001404cec3f)
    */

void FUN_1404cec2c(int param_1,int *param_2)

{
  uint uVar1;
  longlong in_RAX;
  undefined1 uVar2;
  byte bVar3;
  undefined6 uVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RSI;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar2 = SUB81(param_2,0);
  *param_2 = *param_2 + param_1;
  bVar3 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(CONCAT71(unaff_00000019,unaff_BL) + in_RAX);
  uVar1 = (((uint)in_RAX + 0x21000234) - *unaff_RSI) - (uint)(0xdefffdcb < (uint)in_RAX);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) == '\0') {
    cRam00000001004cee7d = cRam00000001004cee7d + (byte)uVar1;
  }
  else {
    cRam00000001454cef99 = cRam00000001454cef99 + (char)param_1;
    uVar1 = CONCAT31((int3)(uVar1 >> 8),((byte)uVar1 ^ 2) * '\x02');
  }
  *(uint *)CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) =
       *(uint *)CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) | 0x21;
  *(undefined1 *)((ulonglong)uVar1 + 0x3b) = *(undefined1 *)((ulonglong)uVar1 + 0x3b);
  *(uint *)CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) =
       *(uint *)CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) | 0xb2919;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

