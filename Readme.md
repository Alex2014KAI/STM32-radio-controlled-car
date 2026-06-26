# ПО предназначена для управления радиоуправляемой машинкой

## Текущая реализация
В текущей прошивки реализован ШИМ. Сигнал задания формируется по нажатию кнопки. Изменение CMP происходит в прерывании ШИМ, при обнулении счетчика.

## Элементная база
1. В качесвте процессора используется TMS32F407VET6.
2. В качестве драйвера используется схема L298N
3. 




<svg width="340" height="260" viewBox="0 0 340 260" xmlns="http://w3.org">
  <!-- Белая подложка -->
  <rect width="100%" height="100%" fill="#ffffff" />

  <!-- Горизонтальная ось X со стрелкой -->
  <path d="M 40 220 L 320 220" stroke="#000000" stroke-width="2" />
  <path d="M 312 215 L 320 220 L 312 225" fill="#000000" />

  <!-- Вертикальная ось Y со стрелкой -->
  <path d="M 70 240 L 70 30" stroke="#000000" stroke-width="2" />
  <path d="M 65 38 L 70 30 L 75 38" fill="#000000" />

  <!-- Пунктирные линии проекций -->
  <path d="M 70 70 L 170 70" stroke="#888888" stroke-width="1.5" stroke-dasharray="6 4" />
  <path d="M 170 70 L 170 220" stroke="#888888" stroke-width="1.5" stroke-dasharray="6 4" />

  <!-- ЖИРНАЯ ЛИНИЯ ГРАФИКА (начинается строго от оси Y) -->
  <path d="M 70 160 L 170 70 L 310 70" fill="none" stroke="#000000" stroke-width="3" stroke-linecap="round" stroke-linejoin="round" />

  <!-- Текстовые подписи точно как на референсе -->
  <text x="15" y="75" fill="#000000" font-family="Georgia, serif" font-size="20" font-style="italic">α_max</text>
  <text x="35" y="165" fill="#000000" font-family="Georgia, serif" font-size="20" font-style="italic">α_0</text>
  <text x="162" y="242" fill="#000000" font-family="Georgia, serif" font-size="20" font-style="italic">t_0</text>
</svg>