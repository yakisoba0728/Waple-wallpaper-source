// Function: FUN_1404b4d3c
// Addr: 1404b4d3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4d3c(char *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar5;
  undefined8 in_RAX;
  uint *puVar3;
  byte *pbVar4;
  bool bVar6;
  
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_2 >> 8)) * '\x02' + (char)param_2,
                                     (char)in_RAX));
  uVar2 = (uint)puVar3 | *puVar3;
  pbVar4 = (byte *)(param_1 + (longlong)param_2);
  bVar1 = *pbVar4;
  bVar5 = (byte)(uVar2 >> 8);
  *pbVar4 = *pbVar4 + bVar5;
  pbVar4 = (byte *)CONCAT71((uint7)(uint3)(uVar2 >> 8),0x21);
  bVar6 = 0x21 < *pbVar4 || (byte)(0x21 - *pbVar4) < CARRY1(bVar1,bVar5);
  uVar2 = in(0x21);
  bVar1 = (byte)uVar2 - *(byte *)(ulonglong)uVar2;
  *param_2 = *param_2 + (char)(uVar2 >> 8) +
             ((byte)uVar2 < *(byte *)(ulonglong)uVar2 || bVar1 < bVar6);
  *param_1 = *param_1 + (bVar1 - bVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

