// Function: FUN_1404d6af8
// Addr: 1404d6af8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6af8(uint param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char in_AL;
  char cVar4;
  byte in_AH;
  byte bVar5;
  undefined6 in_register_00000002;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & param_1;
  bVar5 = in_AH | (byte)((ulonglong)param_2 >> 8);
  bVar2 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar5,in_AL));
  cVar4 = bVar2 + 0x54;
  cVar1 = *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar5,cVar4));
  cVar3 = *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar5,cVar4)) + cVar4;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar5,cVar4)) = cVar3 + (0xab < bVar2);
  if (SCARRY1(cVar1,cVar4) == SCARRY1(cVar3,0xab < bVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *(undefined1 *)CONCAT62(in_register_00000002,CONCAT11(bVar5,cVar4)) =
       *(undefined1 *)CONCAT62(in_register_00000002,CONCAT11(bVar5,cVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

