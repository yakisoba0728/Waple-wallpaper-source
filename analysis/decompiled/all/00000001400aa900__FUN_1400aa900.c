// Function: FUN_1400aa900
// Addr: 1400aa900
// Size: 884 bytes


longlong FUN_1400aa900(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar1 = (uint *)*param_2;
  uVar2 = param_2[1];
  uVar3 = ~*(uint *)(param_1 + 0x28);
  for (puVar5 = puVar1; puVar5 < (uint *)((uVar2 & 0xffffffffffffffe0) + (longlong)puVar1);
      puVar5 = puVar5 + 8) {
    uVar3 = *puVar5 ^ uVar3;
    uVar3 = puVar5[4] ^
            *(uint *)(&DAT_14047af10 + (ulonglong)*(byte *)((longlong)puVar5 + 0xe) * 4) ^
            *(uint *)(&DAT_14047b310 + (ulonglong)*(byte *)((longlong)puVar5 + 0xd) * 4) ^
            *(uint *)(&DAT_14047b710 + (ulonglong)(byte)puVar5[3] * 4) ^
            *(uint *)(&DAT_14047bb10 + (ulonglong)*(byte *)((longlong)puVar5 + 0xb) * 4) ^
            *(uint *)(&DAT_14047bf10 + (ulonglong)*(byte *)((longlong)puVar5 + 10) * 4) ^
            *(uint *)(&DAT_14047c310 + (ulonglong)*(byte *)((longlong)puVar5 + 9) * 4) ^
            *(uint *)(&DAT_14047c710 + (ulonglong)(byte)puVar5[2] * 4) ^
            *(uint *)(&DAT_14047cb10 + (ulonglong)*(byte *)((longlong)puVar5 + 7) * 4) ^
            *(uint *)(&DAT_14047cf10 + (ulonglong)*(byte *)((longlong)puVar5 + 6) * 4) ^
            *(uint *)(&DAT_14047ab10 + (ulonglong)*(byte *)((longlong)puVar5 + 0xf) * 4) ^
            *(uint *)(&DAT_14047d310 + (ulonglong)*(byte *)((longlong)puVar5 + 5) * 4) ^
            *(uint *)(&DAT_14047d710 + (ulonglong)(byte)puVar5[1] * 4) ^
            *(uint *)(&DAT_14047df10 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) ^
            *(uint *)(&DAT_14047e310 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
            *(uint *)(&DAT_14047db10 + (ulonglong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_14047e710 + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = *(uint *)(&DAT_14047df10 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_14047e310 + ((ulonglong)(uVar3 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_14047e710 + ((ulonglong)uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_14047db10 + (ulonglong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_14047af10 + (ulonglong)*(byte *)((longlong)puVar5 + 0x1e) * 4) ^
            *(uint *)(&DAT_14047b310 + (ulonglong)*(byte *)((longlong)puVar5 + 0x1d) * 4) ^
            *(uint *)(&DAT_14047b710 + (ulonglong)(byte)puVar5[7] * 4) ^
            *(uint *)(&DAT_14047bb10 + (ulonglong)*(byte *)((longlong)puVar5 + 0x1b) * 4) ^
            *(uint *)(&DAT_14047bf10 + (ulonglong)*(byte *)((longlong)puVar5 + 0x1a) * 4) ^
            *(uint *)(&DAT_14047c310 + (ulonglong)*(byte *)((longlong)puVar5 + 0x19) * 4) ^
            *(uint *)(&DAT_14047c710 + (ulonglong)(byte)puVar5[6] * 4) ^
            *(uint *)(&DAT_14047cb10 + (ulonglong)*(byte *)((longlong)puVar5 + 0x17) * 4) ^
            *(uint *)(&DAT_14047cf10 + (ulonglong)*(byte *)((longlong)puVar5 + 0x16) * 4) ^
            *(uint *)(&DAT_14047ab10 + (ulonglong)*(byte *)((longlong)puVar5 + 0x1f) * 4) ^
            *(uint *)(&DAT_14047d310 + (ulonglong)*(byte *)((longlong)puVar5 + 0x15) * 4) ^
            *(uint *)(&DAT_14047d710 + (ulonglong)(byte)puVar5[5] * 4);
  }
  puVar4 = (uint *)(((ulonglong)((uVar2 - (longlong)puVar5) + (longlong)puVar1) & 0xfffffffffffffff0
                    ) + (longlong)puVar5);
  for (; puVar5 < puVar4; puVar5 = puVar5 + 4) {
    uVar3 = *puVar5 ^ uVar3;
    uVar3 = *(uint *)(&DAT_14047df10 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) ^
            *(uint *)(&DAT_14047e310 + ((ulonglong)(uVar3 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_14047e710 + ((ulonglong)uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_14047db10 + (ulonglong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_14047af10 + (ulonglong)*(byte *)((longlong)puVar5 + 0xe) * 4) ^
            *(uint *)(&DAT_14047b310 + (ulonglong)*(byte *)((longlong)puVar5 + 0xd) * 4) ^
            *(uint *)(&DAT_14047b710 + (ulonglong)(byte)puVar5[3] * 4) ^
            *(uint *)(&DAT_14047bb10 + (ulonglong)*(byte *)((longlong)puVar5 + 0xb) * 4) ^
            *(uint *)(&DAT_14047bf10 + (ulonglong)*(byte *)((longlong)puVar5 + 10) * 4) ^
            *(uint *)(&DAT_14047c310 + (ulonglong)*(byte *)((longlong)puVar5 + 9) * 4) ^
            *(uint *)(&DAT_14047c710 + (ulonglong)(byte)puVar5[2] * 4) ^
            *(uint *)(&DAT_14047cb10 + (ulonglong)*(byte *)((longlong)puVar5 + 7) * 4) ^
            *(uint *)(&DAT_14047cf10 + (ulonglong)*(byte *)((longlong)puVar5 + 6) * 4) ^
            *(uint *)(&DAT_14047ab10 + (ulonglong)*(byte *)((longlong)puVar5 + 0xf) * 4) ^
            *(uint *)(&DAT_14047d310 + (ulonglong)*(byte *)((longlong)puVar5 + 5) * 4) ^
            *(uint *)(&DAT_14047d710 + (ulonglong)(byte)puVar5[1] * 4);
  }
  for (; puVar5 < (uint *)(uVar2 + (longlong)puVar1); puVar5 = (uint *)((longlong)puVar5 + 1)) {
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_14047ab10 + (ulonglong)(byte)((byte)uVar3 ^ (byte)*puVar5) * 4);
  }
  *(uint *)(param_1 + 0x28) = ~uVar3;
  return (ulonglong)(uint3)(~uVar3 >> 8) << 8;
}

