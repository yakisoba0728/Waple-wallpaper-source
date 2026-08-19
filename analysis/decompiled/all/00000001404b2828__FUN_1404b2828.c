// Function: FUN_1404b2828
// Addr: 1404b2828
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2828(void)

{
  char cVar1;
  char in_AL;
  byte in_AH;
  byte bVar2;
  undefined6 in_register_00000002;
  char in_AF;
  
  cVar1 = in_AH * '\x02';
  bVar2 = (cVar1 < '\0') << 7 | (cVar1 == '\0') << 6 | in_AF << 4 |
          ((POPCOUNT(cVar1) & 1U) == 0) << 2 | 2U | CARRY1(in_AH,in_AH);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

