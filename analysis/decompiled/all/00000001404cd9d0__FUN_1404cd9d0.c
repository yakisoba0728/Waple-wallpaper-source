// Function: FUN_1404cd9d0
// Addr: 1404cd9d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd9d0(byte param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  longlong unaff_RSI;
  
  uVar5 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)param_2;
  bVar4 = (char)((ulonglong)param_2 >> 8) + *(char *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(int *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) + CONCAT22(uVar5,CONCAT11(bVar4,cVar3));
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  pcVar1 = (char *)(unaff_RSI +
                   CONCAT44((int)((ulonglong)param_2 >> 0x20),CONCAT22(uVar5,CONCAT11(bVar4,cVar3)))
                   );
  *pcVar1 = *pcVar1 + bVar4;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + cVar3;
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + unaff_RSI * 8);
  *pbVar2 = *pbVar2 >> (param_1 & 7) | *pbVar2 << 8 - (param_1 & 7);
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 7);
  *pbVar2 = *pbVar2 | bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

