// Function: FUN_1404caf80
// Addr: 1404caf80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caf80(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  undefined8 in_RAX;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  pbVar2 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(byte)in_RAX));
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)pbVar2 >> 8),(byte)in_RAX | *pbVar2);
  pbVar2 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x33);
  *pbVar2 = *pbVar2 ^ (byte)((ulonglong)param_1 >> 8);
  *(char *)((longlong)puVar3 + 0x6b) =
       *(char *)((longlong)puVar3 + 0x6b) + (char)((ulonglong)param_2 >> 8);
  uVar1 = (uint)puVar3 ^ *puVar3;
  bVar4 = (byte)param_1 | (byte)(uVar1 >> 8);
  *param_4 = *param_4 + unaff_BL;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 & bVar4;
  *param_2 = *param_2 + (char)param_2;
  bVar4 = bVar4 & 7;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> bVar4 |
       *(char *)CONCAT71(unaff_00000019,unaff_BL) << 8 - bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

