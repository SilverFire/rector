<?php

namespace Rector\SOLID\Tests\Rector\Class_\ChangeReadOnlyVariableWithDefaultValueToConstantRector\Fixture;

class SomeClass
{
    public function run()
    {
        $replacements = [
            'PHPUnit\Framework\TestCase\Notice' => 'expectNotice',
            'PHPUnit\Framework\TestCase\Deprecated' => 'expectDeprecation',
        ];

        foreach ($replacements as $class => $method) {
        }
    }
}

?>
-----
<?php

namespace Rector\SOLID\Tests\Rector\Class_\ChangeReadOnlyVariableWithDefaultValueToConstantRector\Fixture;

class SomeClass
{
    /**
     * @var string[]
     */
    private const REPLACEMENTS = [
        'PHPUnit\Framework\TestCase\Notice' => 'expectNotice',
        'PHPUnit\Framework\TestCase\Deprecated' => 'expectDeprecation',
    ];
    public function run()
    {
        foreach (self::REPLACEMENTS as $class => $method) {
        }
    }
}

?>
